#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

vector<int> v[10009];
int vis[10009],n,m;

bool dfs(int ver,int parent)
{
	int i,j,t1,t2;
	vis[ver]=1;
	for(i=0;i<v[ver].size();i++)
	{
		t1=v[ver][i];
		if(vis[t1]==-1)
		{
			if(dfs(t1,ver))
				return true;
		}
		else if(t1!=parent)
			return true;
	}
	return false;
}

bool check()
{
	int i,j,t1,t2;
	for(i=1;i<=n;i++)
		vis[i]=-1;
	if(dfs(1,-1))
		return false;
	for(i=1;i<=n;i++)
	{
		if(vis[i]==-1)
			return false;
	}
	return true;
}

int main() {
	int i,j,t1,t2;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&t1,&t2);
		v[t1].push_back(t2);
		v[t2].push_back(t1);
	}
	if(check())
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
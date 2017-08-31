#include <iostream>
#include <queue>
#include <algorithm>
#include <list>
#include <climits>

using namespace std;

int ans,index,n,dis[10009];
list<int> l[10009];

void bfs(int i1)
{
	int i,j,t1,t2;
	for(i=1;i<=n;i++)
		dis[i]=INT_MAX;
	queue<int> q;
	list<int>::iterator it;
	dis[i1]=0;
	index=1;
	ans=0;
	q.push(i1);
	while(!q.empty())
	{
		t1=q.front();
		q.pop();
		for(it=l[t1].begin();it!=l[t1].end();it++)
		{
			t2=*it;
			if(dis[t2]==INT_MAX)
			{
				dis[t2]=dis[t1]+1;
				q.push(t2);
				if(dis[t2]>ans)
				{
					index=t2;
					ans=dis[t2];
				}
			}
		}
	}
}

int main() {
	int i,j,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		l[i].clear();
	for(i=0;i<n-1;i++)
	{
		scanf("%d %d",&a,&b);
		l[a].push_back(b);
		l[b].push_back(a);
	}
	bfs(1);
	bfs(index);
	printf("%d\n",ans);
	return 0;
}
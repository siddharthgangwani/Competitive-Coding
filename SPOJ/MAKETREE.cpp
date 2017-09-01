#include <bits/stdc++.h>

using namespace std;

queue<int> q;
vector<int> l[100009];
int ind[100009],val[100009];

int main() {
	int n,t,i,j,t1,t2,k,temp;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		l[i].clear();
		ind[i]=0;
	}
	for(i=1;i<=k;i++)
	{
		scanf("%d",&t1);
		for(j=0;j<t1;j++)
		{
			scanf("%d",&t2);
			ind[t2]++;
			l[i].push_back(t2);
		}
	}
	for(i=1;i<=n;i++)
	{
		if(ind[i]==0)
			q.push(i);
	}
	temp=0;
	while(!q.empty())
	{
		t1=q.front();
		q.pop();
		val[t1]=temp;
		for(i=0;i<l[t1].size();i++)
		{
			t2=l[t1][i];
			ind[t2]--;
			if(ind[t2]==0)
			{
				q.push(t2);
			}
		}
		temp=t1;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",val[i]);
	}
	return 0;
}
#include <iostream>
#include <list>
#include <algorithm>
#include <queue>

using namespace std;

int ans,n,index,dis[50009];
list< pair<int,int> > l[50009];

void bfs(int i1)
{
	int i,j,temp;
	ans=0;
	queue<int> q;
	list< pair<int,int> >::iterator it;
	for(i=1;i<=n;i++)
		dis[i]=-1;
	dis[i1]=0;
	q.push(i1);
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		for(it=l[temp].begin();it!=l[temp].end();it++)
		{
			if(dis[(*it).first]==-1)
			{
				dis[(*it).first]=dis[temp]+(*it).second;
				if(dis[(*it).first]>ans)
				{
					ans=dis[(*it).first];
					index=(*it).first;
				}
				q.push((*it).first);
				
			}
		}
	}
}

int main() {
	int t,a,b,i,j,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			l[i].clear();
		for(i=0;i<n-1;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			l[a].push_back(make_pair(b,c));
			l[b].push_back(make_pair(a,c));
		}
		bfs(1);
		bfs(index);
		printf("%d\n",ans);
	}
	return 0;
}
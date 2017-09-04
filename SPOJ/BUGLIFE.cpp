#include <iostream>
#include <list>
#include <algorithm>
#include <queue>
#include <list>

using namespace std;

int flag,count,n,vis[2009],val[2009];	
list<int> l[2009];

void bfs(int i1)
{
	int i,j,t1,t2,t3;
	queue<int> q;
	list<int>::iterator it;
	vis[i1]=0;
	val[i1]=1;
	q.push(i1);
	while(!q.empty())
	{
		t2=q.front();
		q.pop();
		for(it=l[t2].begin();it!=l[t2].end();it++)
		{
			if(vis[*it]==-1)
			{
				vis[*it]=0;
				if(val[t2]==1)
				{
					val[*it]=2;
					q.push(*it);
				}
				else if(val[t2]==2)
				{
					val[*it]=1;
					q.push(*it);
				}
			}
			else
			{
				if(val[*it]==val[t2])
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			break;
	}
}

int main() {
	int t,i,j,e,t1,t2,c1=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&e);
		for(i=1;i<=n;i++)
		{
			l[i].clear();
			vis[i]=-1;
			val[i]=2;
		}
		for(i=0;i<e;i++)
		{
			scanf("%d %d",&t1,&t2);
			l[t1].push_back(t2);
			l[t2].push_back(t1);
		}
		flag=0;
		for(i=1;i<=n;i++)
		{
			if(vis[i]==-1)
			{
				bfs(i);
			}
			if(flag==1)
				break;
		}
		printf("Scenario #%d:\n",c1);
		if(flag==1)
			printf("Suspicious bugs found!\n");
		else
			printf("No suspicious bugs found!\n");
		c1++;
	}
	return 0;
}
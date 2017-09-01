#include <bits/stdc++.h>

using namespace std;

priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > pq;
int dis1[1000009],dis2[1000009];
vector< pair<int,int> >l1[1000009],l2[1000009];

int main() {
	int p,q,n,i,j,t1,t2,t,c1,c2,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&p,&q);
		for(i=1;i<=p;i++)
		{
			l1[i].clear();
			l2[i].clear();
			dis1[i]=dis2[i]=2e9;
		}
		for(i=0;i<q;i++)
		{
			scanf("%d %d %d",&t1,&t2,&c1);
			l1[t1].push_back(make_pair(t2,c1));
			l2[t2].push_back(make_pair(t1,c1));
		}
		dis1[1]=0;
		while(!pq.empty())
			pq.pop();
		pq.push(make_pair(0,1));
		while(!pq.empty())
		{
			t1=pq.top().second;
			c1=pq.top().first;
			pq.pop();
			for(i=0;i<l1[t1].size();i++)
			{
				t2=l1[t1][i].first;
				c2=l1[t1][i].second;
				if(dis1[t1]+c2<dis1[t2])
				{
					dis1[t2]=dis1[t1]+c2;
					pq.push(make_pair(dis1[t2],t2));
				}
			}
		}
		dis2[1]=0;
		while(!pq.empty())
			pq.pop();
		pq.push(make_pair(0,1));
		while(!pq.empty())
		{
			t1=pq.top().second;
			c1=pq.top().first;
			pq.pop();
			for(i=0;i<l2[t1].size();i++)
			{
				t2=l2[t1][i].first;
				c2=l2[t1][i].second;
				if(dis2[t1]+c2<dis2[t2])
				{
					dis2[t2]=dis2[t1]+c2;
					pq.push(make_pair(dis2[t2],t2));
				}
			}
		}
		ans=0;
		for(i=1;i<=p;i++)
		{
			ans+=dis1[i];
			ans+=dis2[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}
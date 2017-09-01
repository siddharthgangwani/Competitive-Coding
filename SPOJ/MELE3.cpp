#include <bits/stdc++.h>

using namespace std;

priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > pq;
vector< pair<int,int> > l[50009];
int dis[50009];

int main() {
	int t1,t2,elapsed,i,j,ans,t3,t4,n,k,temp,c1,c2;
	scanf("%d %d",&k,&n);
	for(i=1;i<=k;i++)
	{
		dis[i]=1e9;
		l[i].clear();
	}
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&t1,&t2);
		temp=(int)fabs(t1-t2);
		temp*=5;
		l[t1].push_back(make_pair(t2,temp));
		l[t2].push_back(make_pair(t1,temp));
	}
	elapsed=0;
	dis[1]=0;
	pq.push(make_pair(0,1));
	while(!pq.empty())
	{
		c1=pq.top().first;
		t1=pq.top().second;
		pq.pop();
		elapsed=c1;
		for(i=0;i<l[t1].size();i++)
		{
			t2=l[t1][i].first;
			c2=l[t1][i].second;
			t3=(int)fabs(t1-t2);
			t3*=10;
			t4=elapsed%t3;
			temp=0;
			if(t4!=0 && t1<t2)
				temp=t3-t4;
			else if(t1>t2)
			{
				if(t4<=t3/2)
					temp=t3/2-t4;
				else
					temp=t3-t4+t3/2;
			}
			c2+=temp;
			if(c2+c1<dis[t2])
			{
				dis[t2]=c2+c1;
				pq.push(make_pair(dis[t2],t2));
			}
		}
	}
	printf("%d\n",dis[k]);
	return 0;
}
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

pair< int, pair<int,int> > e[300009];
pair< int, pair<int,int> > temp;
pair<int,int> p[200009];
long long int ans,total;
int n,m;

int find(int x)
{
	if(p[x].first!=x)
		return p[x].first=find(p[x].first);
	return p[x].first;
}

int Union(int x,int y)
{
	int x1=find(x);
	int y1=find(y);
	if(p[x1].second>p[y1].second)
	{
		p[y1].first=x1;
	}
	else if(p[y1].second>p[x1].second)
	{
		p[x1].first=y1;
	}
	else
	{
		p[y1].first=x1;
		p[x1].second++;
	}
}

void mst()
{
	int i,j,index=0,count=0,a,b;
	ans=0;
	for(i=0;i<n;i++)
	{
		p[i].first=i;
		p[i].second=0;
	}
	while(count<n-1)
	{
		temp=e[index++];
		a=find(temp.second.first);
		b=find(temp.second.second);
		if(a!=b)
		{
			ans+=(temp.first);
			count++;
			Union(a,b);
		}
	}
}

int main() {
	int i,j,src,dest,cost;
	while(1)
	{
		total=0;
		scanf("%d %d",&n,&m);
		if((n==0)&&(m==0))
			break;
		for(i=0;i<m;i++)
		{
			scanf("%d %d %d",&src,&dest,&cost);
			e[i].first=cost;
			e[i].second.first=src;
			e[i].second.second=dest;
			total+=cost;
		}
		sort(e,e+m);
		mst();
		printf("%lld\n",total-ans);
	}
	return 0;
}
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

pair< int, pair<int,int> > e[300009];
pair< int, pair<int,int> > temp;
pair<int,int> p[1009];
int ans,n,m;

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

int mst()
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
	return ans;
}

int main() {
	int t,p,a,b,c,i,j,sol;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&p,&n,&m);
		for(i=0;i<m;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			e[i].first=c*p;
			e[i].second.first=a-1;
			e[i].second.second=b-1;
		}
		sort(e,e+m);
		sol=mst();
		printf("%d\n",sol);
	}
	return 0;
}
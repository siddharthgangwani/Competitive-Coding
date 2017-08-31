#include <iostream>
#include <utility>
#include <algorithm>
#include <unordered_map>

using namespace std;

pair< int, pair<int,int> > e[300009];
pair< int, pair<int,int> > temp;
unordered_map<string,int> m;

//parent,rank
pair<int,int> p[10009];

long long int ans;
int n;

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
	int t,i,j,p,i2,i3,dest,cost;
	char t2[20];
	scanf("%d",&t);
	while(t--)
	{
		m.clear();
		i2=0;
		i3=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s %d",t2,&p);
			m[t2]=i2;
			for(j=0;j<p;j++)
			{
				scanf("%d %d",&dest,&cost);
				e[i3].first=cost;
				e[i3].second.first=i2;
				e[i3].second.second=dest-1;
				i3++;
			}
			i2++;
		}
		sort(e,e+i3);
		mst();
		printf("%lld\n",ans);
	}
	return 0;
}
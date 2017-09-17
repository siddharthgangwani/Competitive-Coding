#include <bits/stdc++.h>

using namespace std;

int dis[209][209];

int main() {
	int t,i,j,n,m,k,q,a,b,c,temp,f;
	long long int ans,cnt;
	scanf("%d %d %d %d",&n,&m,&k,&q);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
				dis[i][j]=0;
			else
				dis[i][j]=1e9;
		}
	}
	for(i=0;i<m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		dis[a][b]=min(c,dis[a][b]);
	}
	for(t=1;t<=n;t++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(dis[i][t]+dis[t][j]<dis[i][j])
				{
					dis[i][j]=dis[i][t]+dis[t][j];
				}
			}
		}
	}
	ans=cnt=0;
	for(t=0;t<q;t++)
	{
		scanf("%d %d",&a,&b);
		f=0;
		temp=-1;
		for(i=1;i<=k;i++)
		{
			if((dis[a][i]!=1e9)&&(dis[i][b]!=1e9))
			{
				f=1;
				temp=(temp==-1)?(dis[a][i]+dis[i][b]):min(temp,dis[a][i]+dis[i][b]);
			}
		}
		if(f==1)
		{
			cnt++;
			ans+=temp;
		}
	}
	printf("%lld\n",cnt);
	printf("%lld\n",ans);
	return 0;
}
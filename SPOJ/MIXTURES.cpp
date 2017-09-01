#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>

using namespace std;

int ans,m[109][109],sum[109][109],n,color[109];

void comp()
{
	int i,j,k,l,temp;
	for(i=1;i<=n;i++)
		m[i][i]=0;
	for(l=2;l<=n;l++)
	{
		for(i=1;i<=n-l+1;i++)
		{
			j=i+l-1;
			m[i][j]=INT_MAX;
			for(k=i;k<j;k++)
			{
				temp=m[i][k]+m[k+1][j]+sum[i][k]*sum[k+1][j];
				m[i][j]=min(temp,m[i][j]);
			}
		}
	}
	ans=m[1][n];	
}

int main() {
	int i,j,t;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&color[i]);
		}
		for(i=1;i<=n;i++)
			sum[i][i]=color[i];
		for(i=1;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				sum[i][j]=sum[i][j-1]+color[j];
				sum[i][j]=sum[i][j]%100;
			}
		}
		comp();
		printf("%d\n",ans);
	}
	return 0;
}
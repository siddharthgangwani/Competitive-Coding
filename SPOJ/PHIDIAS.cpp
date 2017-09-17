#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int dp[700][700],h,w,n,w1,h1;

void comp()
{
	int i,j,t1,t2,t3,k;
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			for(k=1;k<=i;k++)
			{
				dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]);
			}
			for(k=1;k<=j;k++)
			{
				dp[i][j]=min(dp[i][j],dp[i][j-k]+dp[i][k]);
			}
		}
	}
}

int main() {
	int t,i,j,a1,a2,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&w,&h,&n);
		for(i=0;i<=h;i++)
		{
			for(j=0;j<=w;j++)
			{
				dp[i][j]=i*j;
			}
		}
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&w1,&h1);
			dp[h1][w1]=0;
		}
		comp();
		printf("%d\n",dp[h][w]);
	}
	return 0;
}
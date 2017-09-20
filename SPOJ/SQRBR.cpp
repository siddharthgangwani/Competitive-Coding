#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int pos[50],n,k,dp[50][50];

int comp()
{
	int i,j,t1,t2;
	for(i=2;i<=2*n;i++)
	{
		dp[1][i]=0;
	}
	dp[1][0]=0;
	dp[1][1]=1;
	for(i=2;i<=2*n;i++)
	{
		for(j=0;j<=2*n;j++)
		{
			if(pos[i]==0)
			{
				dp[i][j]=((j==0)?dp[i-1][1]:(dp[i-1][j-1]+dp[i-1][j+1]));
			}
			else if(pos[i]==1)
			{
				dp[i][j]=((j==0)?0:dp[i-1][j-1]);
			}
		}
	}
	return dp[2*n][0];
}

int main() {
	int t,i,j,t1,t2,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		for(i=1;i<=45;i++)
			pos[i]=0;
		for(i=0;i<k;i++)
		{
			scanf("%d",&t1);
			pos[t1]=1;
		}
		ans=comp();
		printf("%d\n",ans);
	}
	return 0;
}
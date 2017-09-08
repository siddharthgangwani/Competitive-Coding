#include <bits/stdc++.h>

using namespace std;

int dp[3][105][105],n,k;

void comp()
{
	int i,j,t1,t2;		
	memset(dp,0,sizeof(dp));
	dp[0][1][0]=1;
	dp[1][1][0]=1;
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=k;j++)
		{
			dp[0][i][j]=dp[0][i-1][j]+dp[1][i-1][j];
			if(j>0)
				dp[1][i][j]+=dp[1][i-1][j-1];
			else 
				dp[1][i][j]=0;
			dp[1][i][j]+=dp[0][i-1][j];
		}
	}
}

int main() {
	int i,j,t,p,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&p,&n,&k);
		comp();
		ans=dp[1][n][k]+dp[0][n][k];
		printf("%d %d\n",p,ans);
	}
	return 0;
}
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int dp[20][100],n,k;

int comp()
{
	int i,j,z,t1,t2;
	for(i=1;i<=n;i++)
		dp[i][0]=1;
	for(i=0;i<=k;i++)
		dp[0][i]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			dp[i][j]=0;
			for(z=0;z<=i-1;z++)
				dp[i][j]+=dp[i-1][j-z];
		}
	}
	return dp[n][k];
}

int main() {
	int t,i,j,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		ans=comp();
		printf("%d\n",ans);
	}
	return 0;
}
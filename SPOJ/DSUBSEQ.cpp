#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int dp[100009],m=1000000007,l,last[30];
char a[100009];

int main() {
	int t,ans,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		l=strlen(a);
		memset(last,-1,sizeof(last));
		dp[0]=1;
		for(i=1;i<=l;i++)
		{
			dp[i]=dp[i-1]<<1;
			dp[i]=dp[i]%m;
			if(last[ a[i-1] - 'A' ] != -1)
			{
				dp[i]=dp[i]-dp[ last[ a[i-1] - 'A' ] - 1 ];
				if(dp[i]<0)
					dp[i]+=m;
			}
			last[ a[i-1] - 'A' ] = i;
		}
		printf("%d\n",dp[l]);
	}
	return 0;
}
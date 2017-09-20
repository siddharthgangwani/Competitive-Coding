#include <bits/stdc++.h>

using namespace std;

int dp[109][109][109],a[109],n;

int comp(int index,int lislast,int ldslast)
{
	int i,j,t1,t2,t3,t4;
	if(index==n)
		return 0;
	if(dp[index][lislast][ldslast]!=-1)
		return dp[index][lislast][ldslast];
	t1=a[index];
	int ans=comp(index+1,lislast,ldslast);
	if(t1>lislast)
		ans=max(ans,1+comp(index+1,t1,ldslast));
	if(t1<ldslast)
		ans=max(ans,1+comp(index+1,lislast,t1));
	return dp[index][lislast][ldslast]=ans;
}

int main() {
	int i,j,t1,t2,t3,t4,t,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		memset(dp,-1,sizeof(dp));
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		ans=comp(0,0,200);
		printf("%d\n",ans);
	}
	return 0;
}
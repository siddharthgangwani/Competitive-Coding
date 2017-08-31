#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int wt[10009],f,e,n,weight[1000],val[1000];

int solve()
{
	int w=f-e,temp,i,j;
	for(i=0;i<=10009;i++)
	{
		wt[i]=INT_MAX;
	}
	wt[0]=0;
	for(i=1;i<=w;i++)
	{
		for(j=0;j<n;j++)
		{
			if((weight[j]<=i)&&(wt[i-weight[j]]!=INT_MAX))
			{
				wt[i]=min(wt[i],val[j]+wt[i-weight[j]]);
			}
		}
	}
	return wt[w];
}

int main() {
	int t,i,j,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&e,&f,&n);
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&val[i],&weight[i]);
		}
		ans=solve();
		if(ans==INT_MAX)
			printf("This is impossible.\n");
		else 
			printf("The minimum amount of money in the piggy-bank is %d.\n",ans);
	}
	return 0;
}
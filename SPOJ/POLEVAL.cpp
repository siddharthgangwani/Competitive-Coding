#include <iostream>

using namespace std;

int main() {
	int n,i,k,x1,j,count=1;
	long long int res;
	scanf("%d",&n);
	while(n!=-1)
	{
		int c[n+1];
		for(i=0;i<=n;i++)
		{
			scanf("%d",&c[i]);
		}
		scanf("%d",&k);
		int x[k];
		for(i=0;i<k;i++)
		{
			scanf("%d",&x[i]);
		}
		printf("Case %d:\n",count);
		for(i=0;i<k;i++)
		{
			x1=x[i];
			res=c[0];
			for(j=1;j<=n;j++)
			{
				res=res*x1+c[j];
			}
			printf("%lld\n",res);
		}	
		count++;
		scanf("%d",&n);
	}
	return 0;
}
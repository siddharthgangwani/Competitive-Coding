#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t,n,i,count=1;
	scanf("%d",&t);
	while(t--)
	{
		i=0;
		scanf("%d",&n);
		if(n==0)
		{
			printf("Case %d: 0\n",count);
		}
		else
		{
			long long int a[n+5],b[n+5];
			for(i=1;i<=n;i++)
			{
				scanf("%lld\n",&a[i]);
			}
			b[0]=0;
			b[1]=a[1];
			for(i=2;i<=n;i++)
			{
				b[i]=max(b[i-1],a[i]+b[i-2]);
			}
			printf("Case %d: %lld\n",count,b[n]);
		}
		count++;
	}
	return 0;
}
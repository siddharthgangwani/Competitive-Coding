#include <iostream>

using namespace std;

int main() {
	int t,n,i,c1,c2;
	long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		i=0;
		c1=0;
		c2=0;
		scanf("%d",&n);
		c2=n-1;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=n-1;i>=0;i--)
		{
			sum=sum+(c2*a[i]);
			sum=sum-(c1*a[i]);
			c2--;
			c1++;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
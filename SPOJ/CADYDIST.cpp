#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	unsigned long long int i,n,sum;
	scanf("%lld",&n);
	while(n)
	{
		unsigned long long int c[n],p[n];
		sum=0;
		for(i=0;i<n;i++)
			scanf("%lld",&c[i]);
		for(i=0;i<n;i++)
			scanf("%lld",&p[i]);
		sort(c,c+n);
		sort(p,p+n);
		for(i=0;i<n;i++)
			sum=sum+(c[i]*p[n-1-i]);
		printf("%lld\n",sum);
		scanf("%lld",&n);
	}
	return 0;
}
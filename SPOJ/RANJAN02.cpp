#include <iostream>

using namespace std;

int main() {
	int t,i,n;
	long long int a[42];
	a[1]=2;
	for(i=2;i<40;i++)
	{
		a[i]=3*a[i-1]+2;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%lld\n",a[n]);
	}
	return 0;
}
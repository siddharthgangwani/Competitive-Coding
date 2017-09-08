#include <iostream>

using namespace std;

int main() {
	long long int i,n,term;
	int t;
	long long int a[1000004];
	a[1]=1;
	term=0;
	for(i=2;i<=1000000;i++)
	{
		a[i-1]=a[i-1]%1000000003;
		term=(i*(i+1))/2;
		term=term%1000000003;
		term=term*term;
		term=term%1000000003;
		a[i]=(term+a[i-1])%1000000003;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&i);
		printf("%lld\n",a[i]);
	}
	return 0;
}
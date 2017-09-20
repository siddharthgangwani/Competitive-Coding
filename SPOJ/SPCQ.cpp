#include <iostream>

using namespace std;

int main() {
	int t,a;
	long long int n,n1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		while(1)
		{
			n1=n;
			a=0;
			while(n1!=0)
			{
				a+=(n1%10);
				n1=n1/10;
			}
			if(n%a==0)
			{
				break;
			}
			else
			{
				n++;
			}
		}
		printf("%lld\n",n);
	}
	return 0;
}
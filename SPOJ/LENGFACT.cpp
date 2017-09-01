#include <iostream>
#include <cmath>

#define PI 3.141592653589793238462643383279

using namespace std;

int main() {
	int t;
	long long int n,a;
	double ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==0||n==1)
		{
			printf("1\n");
		}
		else
		{
			ans=log(2*PI)-(2*n)+(log(n)*(1+2*n));
			ans=ans/log(10);
			ans=ans*0.5;
			a=ans;
			a++;
			printf("%lld\n",a);
		}
	}
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	long long int n,x,y,t1,t2,t;
	long long int x1[]={1,1,-2,-2},xadd[]={2,2,-2,-2};
	long long int y1[]={0,2,2,-2},yadd[]={-2,2,2,-2};
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		n--;
		x=x1[n%4]+(n/4)*xadd[n%4];
		y=y1[n%4]+(n/4)*yadd[n%4];
		printf("%lld %lld\n",x,y);
	}
	return 0;
}
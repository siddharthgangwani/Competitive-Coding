#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long int r,b,d,c,t;
	int x,y;
	scanf("%lld %lld",&r,&b);
	c=4+r;
	c=c/2;
	d=r+b;
	t=c*c-4*d;
	t=sqrt(t);
	x=(c+t)/2;
	y=(c-t)/2;
	if(x>y)
	{
		printf("%d %d\n",x,y);
	}
	else
	{
		printf("%d %d\n",y,x);
	}
	return 0;
}
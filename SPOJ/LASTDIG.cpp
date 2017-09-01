#include <iostream>
#include <cstdio>

using namespace std;
 
int main() {
	int t;
	long long a,b,d;
	scanf("%d",&t);
	while(t!=0)
	{
		scanf("%lld%lld",&a,&b);
		d=1;
		while(b>0)
		{
			if((b%2)!=0)
			{
				d=(d*a)%10;
				b--;
			}
			b=b/2;
			a=(a*a)%10;
		}
		printf("%lld\n",d);
		t--;
	}
	return 0;
}

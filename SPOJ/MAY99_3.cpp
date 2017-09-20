#include <iostream>
#include <algorithm>

using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main() {
	long long int t,a,b,c,g;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		g=gcd(a,b);
		if((c%g!=0)||(c>max(a,b)))
			printf("NO\n");
		else 	
			printf("YES\n");
	}
	return 0;
}
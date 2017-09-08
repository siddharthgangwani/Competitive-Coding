#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

long long int comp(long long int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else if(n%2==0)
		return (2*comp(n/2)+(n/2));
	else
		return (2*comp(n/2)+(n/2)+1);
}

int main() {
	long long int a,b,ans;
	scanf("%lld %lld",&a,&b);
	ans=comp(b)-comp(a-1);
	printf("%lld\n",ans);
	return 0;
}
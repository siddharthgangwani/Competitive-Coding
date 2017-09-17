#include <iostream>

using namespace std;

long long int m=1000000007;

long long int power(long long int n)
{
	long long int t1,t2;
	if(n==0)
		return 1;
	else if(n%2)
	{
		t1=2;
		t2=power(n/2)%m;
		t1=t1*t2;
		t1=t1%m;
		t1=t1*t2;
		t1=t1%m;
		return t1;
	}
	else
	{
		t1=1;
		t2=power(n/2)%m;
		t1=t1*t2;
		t1=t1%m;
		t1=t1*t2;
		t1=t1%m;
		return t1;
	}
}

int main() {
	int t;
	long long int n,ans;
	scanf("%d",&t);
	while(t--)
	{
		ans=1;
		scanf("%lld",&n);
		n--;
		ans=power(n);
		printf("%lld\n",ans);
	}
	return 0;
}
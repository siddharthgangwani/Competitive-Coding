#include <iostream>

using namespace std;

int main() {
	int n,l,i;
	long long int m=1000000007,ans=1;
	while(scanf("%d %d",&n,&l))
	{
		if((n==0)&&(l==0))
		{
			break;
		}
		ans=1;
		for(i=0;i<l-1;i++)
		{
			ans=ans%m;
			ans=(ans*n)%m;
			ans=(ans+1)%m;
		}
		ans=ans%m;
		ans=(ans*n)%m;
		printf("%lld\n",ans);
	}
	return 0;
}
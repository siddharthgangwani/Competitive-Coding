#include <iostream>

using namespace std;

int main() {
	long long int k,ans;
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%lld",&k);
	    ans=192+(k-1)*250;
	    printf("%lld\n",ans);
	}
	return 0;
}
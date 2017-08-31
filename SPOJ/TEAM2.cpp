#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long int a[4],ans;
	int i,j=1;
	while(scanf("%lld",&a[0])!=EOF)
	{
		for(i=1;i<4;i++)
		{
			scanf("%lld",&a[i]);
		}
		sort(a,a+4);
		ans=a[3]+a[2];
		printf("Case %d: %lld\n",j,ans);
		j++;
	}
	return 0;
}
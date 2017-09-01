#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int n,a[100009],i,j;
	long long int ans;
	scanf("%d",&n);
	while(n!=0)
	{
		ans=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			ans+=abs(a[i]);
			a[i+1]+=a[i];
		}
		printf("%lld\n",ans);
		scanf("%d",&n);
	}
	return 0;
}
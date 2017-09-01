#include <iostream>

using namespace std;

int main() {
	long long int a[16],ans;
	int i,n,k,temp;
	a[0]=1;
	for(i=1;i<=14;i++)
	{
		a[i]=a[i-1]*i;
	}
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		ans=a[n];
		for(i=0;i<k;i++)
		{
			scanf("%d",&temp);
			ans=ans/a[temp];
		}
		printf("%lld\n",ans);
	}
	return 0;
}
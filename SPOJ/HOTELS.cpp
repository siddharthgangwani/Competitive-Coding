#include <iostream>
#include <algorithm>

using namespace std;

long long int a[300009];

int main() {
	long long int i,j,n,m,curr,ans,start=0;
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	ans=-1;
	curr=a[0];
	for(i=1;i<=n;i++)
	{
		while((curr>m)&&(start<i-1))
		{
			curr-=a[start];
			start++;
		}
		if(curr<=m)
		{
			ans=max(curr,ans);
		}
		if(i<n)
			curr+=a[i];
	}
	printf("%lld\n",ans);
	return 0;
}
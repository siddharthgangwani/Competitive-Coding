#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
	int i,t,a[1500],b[1500],c[1500][3],ans,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	c[0][0]=a[0];
	c[0][1]=b[0];
	n=t;
	for(i=1;i<n;i++)
	{
		c[i][0]=max(c[i-1][0]+a[i]+abs(b[i]-b[i-1]),c[i-1][1]+a[i]+abs(b[i]-a[i-1]));
		c[i][1]=max(c[i-1][0]+b[i]+abs(a[i]-b[i-1]),c[i-1][1]+b[i]+abs(a[i]-a[i-1]));
	}
	ans=max(c[n-1][0],c[n-1][1]);
	printf("%d\n",ans);
	return 0;
}
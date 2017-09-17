#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int i,j,n,ans=0,t;
	double b[1005],temp,diff;
	char a[10000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s %lf",a,&b[i]);
		}
		sort(b,b+n);
		diff=-1;
		for(i=0;i<n;i++)
		{
			if(i==(n-1))
			{
				temp=(360-b[i])+b[0];
			}
			else
			{
				temp=b[i+1]-b[i];
			}
			if(temp>diff)
				diff=temp;
		}
		diff=360-diff;
		ans=ceil(12*diff);
		printf("%d\n",ans);
	}
	return 0;
}
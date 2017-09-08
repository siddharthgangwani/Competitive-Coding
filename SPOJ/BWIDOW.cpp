#include <iostream>

using namespace std;

int main() {
	int t,n,index,i,flag;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		long long int a[n],b[n],large;
		large=0;
		index=0;
		flag=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld %lld",&a[i],&b[i]);
			if(a[i]>large)
			{
				large=a[i];
				index=i;
			}
		}
		for(i=0;i<n;i++)
		{
			if(i==index)
				continue;
			if(b[i]>=large)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("-1\n");
		else
			printf("%d\n",index+1);
	}
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int a[40],i,rem,index,n,t,count,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
			index=0;
			while(n!=0)
			{
				rem=n%2;
				a[index++]=rem;
				n=n>>1;
			}
			count=0;
			ans=0;
			for(i=index-1;i>=0;i--)
			{
				ans=ans+((1<<count)*a[i]);
				count++;
			}
			printf("%d\n",ans);
		}
		else
		{
			printf("%d\n",n);
		}
	}
	return 0;
}
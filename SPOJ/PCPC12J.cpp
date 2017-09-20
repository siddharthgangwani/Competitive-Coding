#include <iostream>

using namespace std;

int main() {
	int t,ans,i,n,temp,a[102],c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<102;i++)
		{
			a[i]=0;
		}
		ans=-1;
		c=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			a[temp]++;
		}	
		for(i=1;i<102;i++)
		{
			if((a[i]%i==0)&&(a[i]!=0))
			{
				if(a[i]>c)
				{
					ans=i;
					c=a[i];
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
#include <iostream>

using namespace std;

int main(){
	int t,n,ans,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans=n;
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				while(n%i==0)
				{
					n=n/i;
				}
				ans=ans-(ans/i);
			}
		}
		if(n>1)
		{
			ans=ans-(ans/n);
		}
		printf("%d\n",ans);
	}
	return 0;
}

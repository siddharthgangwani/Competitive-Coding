#include <iostream>

using namespace std;

int main() {
	int t,n,a[1009],i,j,temp,flag=0;
	scanf("%d",&t);
	while(t--)
	{
		flag=0;	
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			a[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			if(a[temp+1]==0)
				a[temp+1]=1;
			else if(a[n-temp]==0)
				a[n-temp]=1;
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int a[10002];
	int n,t,i,flag;
	scanf("%d",&t);
	while(t--)
	{
		flag=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			while(1)
			{
				if((a[i]!=0)&&(a[i+1]!=0))
				{
					a[i]--;
					a[i+1]--;
				}
				else if((a[i]==0)||(a[i+1]==0))
				{
					break;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
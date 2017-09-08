#include <iostream>

using namespace std;

int main() {
	int t,n,r,i,j,flag,count=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&r);
		flag=0;
		int a[r],b[r];
		for(i=0;i<r;i++)
		{
			scanf("%d %d",&a[i],&b[i]);
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<r;j++)
			{
				if(a[i]==b[j])
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			printf("Scenario #%d: spied\n",count);
		else
			printf("Scenario #%d: spying\n",count);
		count++;
	}
	return 0;
}
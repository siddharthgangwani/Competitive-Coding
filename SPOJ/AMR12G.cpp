#include <iostream>

using namespace std;

int a[100+10];

int main() {
	int t,n,m,k,i,j,u,c,h,sum,min;
	char s[100];
	scanf("%d",&t);
	for(u=1;u<=t;u++)
	{
		scanf("%d %d %d",&n,&m,&k);
		for(i=0;i<100;i++)
		{
			a[i]=0;
		}
		for(i=0;i<n;i++)
		{
			c=0;
			scanf("%s",s);
			for(j=0;s[j]!='\0';j++)
			{
				if(s[j]=='*')
				{
					c++;
				}
			}
			a[i]=c;
		}
		for(i=1;i<=k;i++)
		{
			min=a[0];
			h=0;
			for(j=1;j<n;j++)
			{
				if(min>a[j])
				{
					min=a[j];
					h=j;
				}
			}
			a[h]=m-a[h];
		}
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a[j];
		}
		printf("%d\n",sum);
	}
	return 0;
}
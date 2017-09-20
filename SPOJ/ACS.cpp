#include <iostream>

using namespace std;

int main() {
	int t,i,j,temp;
	char ch;
	long long int ans;
	int r[1238],c[5685],a,b,term=0;
	for(i=1;i<=1234;i++)
	{
		r[i]=i;
	}
	for(i=1;i<=5678;i++)
	{
		c[i]=i;
	}
	while(scanf("%c",&ch)!=EOF)
	{
		ans=0;
		if(ch=='R')
		{
			scanf("%d %d",&a,&b);
			temp=r[a];
			r[a]=r[b];
			r[b]=temp;
		}
		else if(ch=='C')
		{
			scanf("%d %d",&a,&b);
			temp=c[a];
			c[a]=c[b];
			c[b]=temp;
		}
		else if(ch=='Q')
		{
			scanf("%d %d",&a,&b);
			ans=((r[a]-1)*5678)+c[b];
			printf("%lld\n",ans);
		}
		else if(ch=='W')
		{
			scanf("%d",&term);
			a=(term-1)/5678+1;
			b=(term-1)%5678+1;
			for(i=1;i<=1234;i++)
			{
				if(r[i]==a)
				{
					a=i;
					break;
				}
			}
			for(i=1;i<=5678;i++)
			{
				if(c[i]==b)
				{
					b=i;
					break;
				}
			}
			printf("%d %d\n",a,b);
		}
	}
	return 0;
}
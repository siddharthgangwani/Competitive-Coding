#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{
	int rem;
	while(a%b!=0)
	{
		rem=a%b;
		a=b;
		b=rem;
	}
	return b;
}

int main() {
	int t,i,a,b,count=0,c,d;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d %d",&a,&b);
		c=gcd(a,b);
		d=sqrt(c);
		for(i=1;i<=d;i++)
		{
			if(c%i==0)
			{
				count+=2;
			}
		}
		if(d*d==c)
		{
			count--;
		}
		printf("%d\n",count);
	}
	return 0;
}
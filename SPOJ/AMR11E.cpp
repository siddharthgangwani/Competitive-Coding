#include <iostream>

using namespace std;

int a[10000]={0};

void sieve()
{
	int i,j;
	for(i=2;i<10000;i++)
	{
		if(a[i]==0)
		{
			for(j=i*2;j<10000;j+=i)
			{
				a[j]++;
			}
		}
	}
}

int main() {
	int b[1003];
	int i=0,j=0,m=1,t;
	sieve();
	for(i=30;m<1001;i++)
	{
		if(a[i]>=3)
		{
			b[m]=i;
			m++;
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&j);
		printf("%d\n",b[j]);
	}
	return 0;
}
#include <iostream>

using namespace std;

int a[10000007]={0};
unsigned long long int b[10000007];

void sieve()
{
	int i,j;
	for(i=2;i<10000007;i++)
	{
		if(a[i]==0)
		{
			for(j=i;j<10000007;j+=i)
			{
				if(a[j]==0)
				{
					a[j]=i;
				}		
			}
		}
	}
	b[0]=0;
	b[1]=0;
	for(i=2;i<10000007;i++)
	{
		b[i]=b[i-1]+(unsigned long long)a[i];
	}
}

int main() {
	sieve();
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%lld\n",b[n]);
	}
	return 0;
}
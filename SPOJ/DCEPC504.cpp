#include <iostream>

using namespace std;

char ch;

void compute(long long int n,long long int k)
{
	if((n==0)&&(k==0))
	{
		ch='M';
		return;
	}
	else
	{
		compute(n-1,k/2);
		if(k%2==1)
		{
			if(ch=='M')
				ch='F';
			else if(ch=='F')
				ch='M';
		}
		return;
	}
}

int main() {
	long long int t,n,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		compute(n-1,k-1);
		if(ch=='M')
			printf("Male\n");
		else
			printf("Female\n");
	}
	return 0;
}
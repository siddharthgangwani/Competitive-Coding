#include <iostream>

using namespace std;

int main() {
	int t,n,temp,i;
	long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			sum+=temp;
		}
		if(sum%n)
			printf("%d\n",n-1);
		else
			printf("%d\n",n);
	}
	return 0;
}
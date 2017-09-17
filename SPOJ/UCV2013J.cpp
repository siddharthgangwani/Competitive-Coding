#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i,n,sum,temp,quo;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		quo=floor(n/2);
		sum=0;
		for(i=1;i<=n;i++)
		{	
			scanf("%d",&temp);
			if(i>quo)
			{
				sum+=temp;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
#include <iostream>
#include <cstdlib>

using namespace std;
 
int main() {
	int T,A,B;
	int i,j,count;
	long long int a[1000],b[1000],diff;
	scanf("%d",&T);
	while(T!=0)
	{
		diff=10000000;
		count=0;
		scanf("%d",&A);
		for(i=0;i<A;i++)
		{
			scanf("%lld",&a[i]);
		}
		scanf("%d",&B);
		for(i=0;i<B;i++)
		{
			scanf("%lld",&b[i]);
		}
		for(i=0;i<A;i++)
		{
			for(j=0;j<B;j++)
			{
				if(a[i]==b[j])
				{
					diff=0;
					count=1;
					break;
				}
				else
				{
					if(llabs(a[i]-b[j])<diff)
					{
						diff=llabs(a[i]-b[j]);
					}
				}
			}
			if(count==1)
				break;
		}
		printf("%lld\n",diff);
		T--;
	}
	return 0;
}
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int a[1009];

int main() {
	int i,j,t,temp;
	a[0]=0;
	for(i=1;i<=1000;i++)
	{
		temp=sqrt(i);
		if((temp*temp)==i)
			a[i]=1;
		else
		{
			temp=INT_MAX;
			for(j=1;j<=i/2;j++)
			{
				temp=min(a[i-j]+a[j],temp);
			}
			a[i]=temp;
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&temp);
		printf("%d\n",a[temp]);
	}
	return 0;
}
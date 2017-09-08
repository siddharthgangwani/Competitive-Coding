#include <iostream>
#include <algorithm>

using namespace std;

int x[100009],k,a[10];

int main() {
	int price,i,j,t1;
	scanf("%d %d",&price,&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&t1);
		a[i]=t1;
		if(i>1)
			a[i]+=a[i-1];
	}
	x[0]=1;
	for(i=1;i<=price;i++)
		x[i]=0;
	for(i=1;i<=k;i++)
	{
		for(j=a[i];j<=price;j++)
		{
			if(x[j-a[i]]==1)
				x[j]=1;
		}
	}
	if(x[price]==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
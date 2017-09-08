#include <iostream>

using namespace std;

int main() {
	int a[1000009]={0},index,t,n,k=1,caser,i,j;
	for(i=2;i<=100;i++)
	{	
		if(a[i]==0)
		{
			index=i*i*i;
			for(j=index;j<1000009;j+=index)
			{
				a[j]=-1;
			}
		}
	}
	for(i=1;i<1000009;i++)
	{
		if(a[i]==0)
		{
			a[i]=k;
			k++;
		}
	}
	scanf("%d",&t);
	caser=1;
	while(t--)
	{
		scanf("%d",&n);
		if(a[n]==-1)
		{
			printf("Case %d: Not Cube Free\n",caser);
		}
		else
		{
			printf("Case %d: %d\n",caser,a[n]);
		}
		caser++;
	}
	return 0;
}
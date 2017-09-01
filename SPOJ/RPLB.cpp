#include <iostream>

using namespace std;

int a[1009][1009],val[1009],n,k;

void comp()
{
	int i,j,t1,t2;
	for(i=0;i<=k;i++)
		a[0][k]=0;
	for(i=0;i<=n;i++)
		a[i][0]=0;
	for(i=1;i<=n;i++)
	{
		t1=0;
		t2=0;
		for(j=1;j<=k;j++)
		{
			if(i==1)
			{
				if(val[i]<=j)
				{	
					a[i][j]=val[i];
				}
				else
				{	
					a[i][j]=0;
				}
			}
			else
			{
				t1=a[i-1][j];
				if(val[i]<=j)
				{
					t2=val[i]+a[i-2][j-val[i]];
				}
				a[i][j]=max(t1,t2);
			}
		}
	}
}

int main() {
	int t,i,j,c=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		for(i=1;i<=n;i++)
			scanf("%d",&val[i]);
		comp();
		printf("Scenario #%d: %d\n",c,a[n][k]);
		c++;
	}
	return 0;
}
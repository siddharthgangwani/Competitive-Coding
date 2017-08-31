#include <iostream>
using namespace std;

int a[209][209],n;

int main() {
	int i,j,k,t,f;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				f=0;
				for(k=1;k<=n;k++)
				{
					if((k!=i)&&(k!=j)&&((a[i][k]+a[k][j])==a[i][j]))
						f=1;
				}
				if(f==0)
						printf("%d %d\n",i,j);
			}
		}
		
	}
	return 0;
}
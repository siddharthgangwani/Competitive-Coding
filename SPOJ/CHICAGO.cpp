#include <iostream>

using namespace std;

double a[109][109];

int main() {
	int i,j,k,n,m,t1,t2,p;
	double d;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;	
		scanf("%d",&m);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==j)
					a[i][j]=1.0;
				else
					a[i][j]=0.0;
			}
		}
		for(i=0;i<m;i++)
		{
			scanf("%d %d %lf",&t1,&t2,&d);
			a[t1][t2]=d/100.0;
			a[t2][t1]=d/100.0;
		}
		for(k=1;k<=n;k++)
		{
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if((a[i][k]!=0)&&(a[k][j]!=0)&&((a[i][k]*a[k][j])>a[i][j]))
					{
						a[i][j]=a[i][k]*a[k][j];
					}
				}
			}
		}
		printf("%lf percent\n",a[1][n]*100.0+1e-10);
	}
	return 0;
}
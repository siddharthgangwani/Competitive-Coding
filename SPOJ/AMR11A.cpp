#include <iostream>
#include <algorithm>

using namespace std;

int a[509][509],r,c,ans;

void comp()
{
	int i,j,t1,t2;
	a[r][c]=1;
	for(i=c-1;i>=1;i--)
	{
		a[r][i]=a[r][i+1]-a[r][i];
		if(a[r][i]<=0)
		{
			a[r][i]=1;
		}
	}
	for(i=r-1;i>=1;i--)
	{
		a[i][c]=a[i+1][c]-a[i][c];
		if(a[i][c]<=0)
		{
			a[i][c]=1;
		}
	}
	for(i=r-1;i>=1;i--)
	{
		for(j=c-1;j>=1;j--)
		{
			a[i][j]=min(a[i+1][j],a[i][j+1])-a[i][j];
			if(a[i][j]<=0)
				a[i][j]=1;
		}
	}
	ans=a[1][1];
}

int main() {
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&r,&c);
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		comp();
		printf("%d\n",ans);
	}
	return 0;
}
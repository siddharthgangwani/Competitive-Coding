#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int r,c,x1,y1,i,j,a[50][50],b[50][50];
	scanf("%d %d",&r,&c);
	scanf("%d %d",&x1,&y1);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	b[x1][y1]=a[x1][y1];
	for(i=x1+1;i<=r;i++)
	{
		b[i][y1]=b[i-1][y1]-a[i][y1];
	}
	for(j=y1+1;j<=c;j++)
	{
		b[x1][j]=b[x1][j-1]-a[x1][j];
	}
	for(i=x1+1;i<=r;i++)
	{
		for(j=y1+1;j<=c;j++)
		{
			b[i][j]=max(b[i-1][j]-a[i][j],b[i][j-1]-a[i][j]);	
		}
	}
	if(b[r][c]<0)
	{
		printf("N\n");
	}
	else
	{
		printf("Y %d\n",b[r][c]);
	}
	return 0;
}
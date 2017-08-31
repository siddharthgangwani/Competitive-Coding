#include <iostream>
#include <algorithm>

using namespace std;

int a[100009][5],n;

int main() {
	int i,j,t1,t2,t3,count=1;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		a[0][2]+=a[0][1];
		if(n>=2)
		{
			a[1][0]+=a[0][1];
			a[1][1]+=min(a[0][1],min(a[1][0],a[0][2]));
			a[1][2]+=min(a[0][1],min(a[0][2],a[1][1]));
		}
		for(i=2;i<n;i++)
		{
			for(j=0;j<3;j++)
			{
				if(j==0)
				{
					a[i][j]+=min(a[i-1][0],a[i-1][1]);
				}
				else if(j==1)
				{
					t1=min(a[i-1][0],a[i][0]);
					t2=min(a[i-1][2],a[i-1][1]);
					a[i][j]+=min(t1,t2);
				}
				else
				{
					t1=min(a[i-1][1],a[i-1][2]);
					a[i][j]+=min(t1,a[i][1]);
				}
			}
		}
		printf("%d. %d\n",count,a[n-1][1]);
		count++;
	}
	return 0;
}
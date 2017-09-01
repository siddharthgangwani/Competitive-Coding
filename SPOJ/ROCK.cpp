#include <iostream>
#include <algorithm>

using namespace std;

int best[209][209],ans,n;
char a[209];

void comp()
{
	int l,k,i,j,t1,t2;
	for(l=2;l<=n;l++)
	{
		for(i=1;i<=(n-l+1);i++)
		{
			j=i+l-1;
			t2=best[i][j];
			t1=0;
			for(k=i;k<j;k++)
			{
				t1=max(t1,best[i][k]+best[k+1][j]);
			}
			t1=max(t1,t2);
			best[i][j]=t1;
		}
	}
	ans=best[1][n];
}

int main() {
	int i,j,t,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %s",&n,a);
		for(i=1;i<=n;i++)
		{
			if(a[i-1]=='1')
				best[i][i]=1;
			else
				best[i][i]=0;
		}
		for(i=1;i<=n;i++)
		{
			if(best[i][i]==1)
				temp=1;
			else
				temp=-1;
			for(j=i+1;j<=n;j++)
			{
				if(a[j-1]=='1')
					temp++;
				else
					temp--;
				if(temp>0)
					best[i][j]=j-i+1;
				else
					best[i][j]=0;
			}
		}
		comp();
		printf("%d\n",ans);
	}
	return 0;
}
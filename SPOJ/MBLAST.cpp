#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>

using namespace std;

char a[3000],b[3000];
int ans[3000][3000];
int l1,l2,k;

int comp()
{
	int i,j,temp;
	for(i=0;i<=l1;i++)
	{
		for(j=0;j<=l2;j++)
		{
			if(i==0)
				ans[i][j]=k*j;
			else if(j==0)
				ans[i][j]=k*i;
			else
			{
				temp=min(ans[i-1][j-1]+abs(a[i-1]-b[j-1]),ans[i-1][j]+k);
				ans[i][j]=min(temp,ans[i][j-1]+k);
			}
		}
	}
	return ans[l1][l2];
}

int main() {
	int final;
	scanf("%s %s %d",a,b,&k);
	l1=strlen(a);
	l2=strlen(b);
	final=comp();
	printf("%d\n",final);
	return 0;
}
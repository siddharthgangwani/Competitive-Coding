#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char a[6200],b[6200];
int final[6200][6200];
int l1,l2;

int lcs()
{
	int i,j;
	for(i=0;i<=l1;i++)
	{
		for(j=0;j<=l2;j++)
		{
			if((i==0)||(j==0))
				final[i][j]=0;
			else if(a[i-1]==b[j-1])
			{
				final[i][j]=final[i-1][j-1]+1;
			}
			else
			{
				final[i][j]=max(final[i-1][j],final[i][j-1]);
			}
		}
	}
	return final[l1][l2];
}

int main() {
	int n,i,j,temp,ans,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		n=strlen(a);
		l1=n;
		l2=l1;
		for(i=0,j=n-1;j>=0;j--)
		{
			b[i++]=a[j];
		}
		b[i]='\0';
		temp=lcs();
		ans=l1-temp;
		printf("%d\n",ans);
	}
	return 0;
}
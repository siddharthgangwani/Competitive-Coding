#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char a[1009],b[1009];
int l1,l2;

int lcs()
{
	int final[1009][1009],i,j;
	for(i=0;i<=l1;i++)
	{
		for(j=0;j<=l2;j++)
		{
			if(i==0||j==0)
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
	int i,j,ans,temp;
	while(1)
	{
		scanf("%s",a);
		if(a[0]=='#')
		{
			break;
		}
		else
			scanf("%s",b);
		l1=strlen(a);
		l2=strlen(b);
		temp=lcs();
		ans=(l1-temp)*15+(l2-temp)*30;
		printf("%d\n",ans);
	}
	return 0;
}
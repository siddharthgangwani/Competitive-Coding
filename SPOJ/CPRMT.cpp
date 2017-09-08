#include <iostream>
#include <cstring>

using namespace std;

int min(int a, int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main() {
	char a[1005],b[1005],z;
	int i,j,ch,flag;
	int l1,l2;
	while(scanf("%s %s",&a,&b)!=EOF)
	{
		int c[30]={0};
		int d[30]={0};
		l1=strlen(a);
		l2=strlen(b);
		for(i=0;i<l1;i++)
		{
			ch=a[i];
			c[ch-97]++;
		}
		for(i=0;i<l2;i++)
		{
			ch=b[i];
			d[ch-97]++;
		}
		for(i=0;i<26;i++)
		{
			if((c[i]!=0)&&(d[i]!=0))
			{
				flag=min(c[i],d[i]);
				z=i+97;
				for(j=0;j<flag;j++)
				{
					printf("%c",z);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

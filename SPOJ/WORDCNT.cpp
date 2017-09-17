#include <iostream>
#include <cctype>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	int t,tempo,i,j,flag,a1,temp,maxi,leng,ft,ft2;
	char a[1000009],ch;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		flag=0;
		a1=0;
		temp=0;
		maxi=0;
		ft=0;
		ft2=0;
		gets(a);
		leng=strlen(a);
		if(leng==0)
		{
			++t;
		}
		else
		{
			a[leng]=' ';
			a[leng+1]='\0';
			leng++;
			for(i=0;i<leng;i++)
			{
				if((flag==0)&&(isalpha(a[i])))
				{
					tempo=1;
					flag=1;
					ft=0;
					ft2=1;
				}
				else if((flag==1)&&(isalpha(a[i])))
				{
					tempo++;
				}
				else if((flag==1)&&((a[i]<'a')||(a[i]>'z')))
				{
					flag=0;
					if(ft==0)
					{
						if(a1==0)
						{
							a1=tempo;
							temp=1;
							maxi=1;
						}
						else if(a1==tempo)
						{
							temp++;
						}
						else
						{
							if(temp>maxi)
							{
								maxi=temp;
							}
							a1=tempo;
							temp=1;
						}
					}
					ft=1;
				}
			}
			maxi=max(maxi,temp);
			if(ft2==0)
				printf("0\n");
			else
				printf("%d\n",maxi);
		}
	}
	return 0;
}
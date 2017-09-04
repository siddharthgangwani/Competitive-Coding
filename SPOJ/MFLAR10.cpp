#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char a[1300];
	char ch,ch2;
	int i,flag,leng,k;
	gets(a);
	while(strcmp(a,"*")!=0)
	{
		flag=1;
		leng=strlen(a);
		if(leng>0)
		{
			for(i=0;i<leng;i++)
			{
				if(a[i]!=' ')
					break;
			}
			ch=a[i];
			ch=toupper(ch);
			for(i=0;i<leng;i++)
			{
				if((a[i]==' ')&&(isalpha(a[i+1])))
				{
					ch2=a[i+1];
					ch2=toupper(ch2);
					if(ch!=ch2)
					{
						flag=0;
						break;
					}
				}
			}
		if(flag==0)
			printf("N\n\n");
		else
			printf("Y\n\n");
		}
		gets(a);
	}
	return 0;
}
#include <iostream>
#include <cctype>

using namespace std;

int main() {
	int t,key,i,c;
	char ch,a[100009];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %s",&key,a);
		if((key>=0)&&(key<=25))
		{
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]=='.')
					printf(" ");
				else if(isupper(a[i]))
				{
					c=a[i]-65;
					c+=key;
					c=c%26;
					c+=65;
					ch=c;
					printf("%c",ch);
				}
				else if(islower(a[i]))
				{
					c=a[i]-97;
					c+=key;
					c=c%26;
					c+=97;
					ch=c;
					printf("%c",ch);
				}
				else
					printf("%c",a[i]);
			}
		}
		else if((key>=26)&&(key<=51))
		{
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]=='.')
					printf(" ");
				else if(isupper(a[i]))
				{
					c=a[i]-65;
					c+=key;
					c=c%26;
					c+=97;
					ch=c;
					printf("%c",ch);
				}
				else if(islower(a[i]))
				{
					c=a[i]-97;
					c+=key;
					c=c%26;
					c+=65;
					ch=c;
					printf("%c",ch);
				}
				else
					printf("%c",a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
#include <iostream>
#include <cstring>
#include <cctype>
#include  <algorithm>

using namespace std;

int main() {
	char a[2000];
	int c1=0,c2=0,len,i;
	while(scanf("%s",&a)!=EOF)
	{
		c1=0;
		c2=0;
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if((i+1)%2)
			{
				if(isupper(a[i]))
				{
					c1++;
				}
				else if(islower(a[i]))
				{
					c2++;
				}
			}
			else
			{
				if(isupper(a[i]))
				{
					c2++;
				}
				else if(islower(a[i]))
				{
					c1++;
				}
			}
		}
		printf("%d\n",min(c1,c2));
	}
	return 0;
}
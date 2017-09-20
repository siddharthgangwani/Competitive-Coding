#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char a[600],b[600];
	int flag,ans,len,i;
	while(scanf("%s %s",&a,&b))
	{
		if((a[0]=='*')&&(b[0]=='*'))
		{
			break;
		}
		len=strlen(a);
		ans=0;
		flag=0;
		for(i=0;i<len;i++)
		{
			if(a[i]!=b[i])
			{
				flag=1;
			}
			else if(a[i]==b[i])
			{
				if(flag==1)
				{
					ans++;
					flag=0;
				}
			}
		}
		if(flag==1)
		{
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
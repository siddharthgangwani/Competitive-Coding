#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int n,t,leng;
	char a[50010],ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %s",&n,&a);
		leng=strlen(a);
		ans=a[leng-1];
		printf("%c\n",ans);
	}
	return 0;
}
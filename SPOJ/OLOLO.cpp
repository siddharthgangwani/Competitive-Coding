#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t,ch,count,i,flag=0;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+t);
	for(i=0;i<t;i++)
	{
		if((a[i]!=a[i+1])&&(a[i]!=a[i-1]))
		{
			flag=1;
			break;
		}
	}
	printf("%d\n",a[i]);
	return 0;
}
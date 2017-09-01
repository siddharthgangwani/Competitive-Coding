#include <iostream>

using namespace std;

int main() {
	int n=0,i;
	int a[11];
	a[10]=0;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if((n<100)&&(a[i]+n>=100))
			break;
		n=n+a[i];
	}
	if((100-n)<(a[i]+n-100))
		printf("%d\n",n);
	else if((100-n)>=(a[i]+n-100))
		printf("%d\n",a[i]+n);
	return 0;
}
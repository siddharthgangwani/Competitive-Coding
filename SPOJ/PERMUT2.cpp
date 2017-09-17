#include <iostream>

using namespace std;

int main() {
	long int n,i,key;
	int flag;
	scanf("%ld",&n);
	while(n)
	{
		flag=0;
		long int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
			key=a[i];
			b[key-1]=i+1;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");
		scanf("%ld",&n);
	}
	return 0;
}
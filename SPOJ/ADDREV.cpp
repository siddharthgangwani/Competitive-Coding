#include <iostream>

using namespace std;

int a[10000];

int main() {
	int N;
	int A,B,C,D,E;
	int i=0,j;
	int rem,rev,sum;
	cin>>N;
	while(N!=0)
	{
		cin>>A>>B;
		rem=0;
		rev=0;
		while(A!=0)
		{
			rem=A%10;
			rev=rem+(rev*10);
			A=A/10;
		}
		C=rev;
		rem=0;
		rev=0;
		while(B!=0)
		{
			rem=B%10;
			rev=rem+(rev*10);
			B=B/10;
		}
		D=rev;
		sum=C+D;
		rem=0;
		rev=0;
		while(sum!=0)
		{
			rem=sum%10;
			rev=rem+(rev*10);
			sum=sum/10;
		}
		E=rev;
		a[i]=E;
		i++;
		N--;
	}
	cout<<"\n\n";
	for(j=0;j<i;j++)
	{
		cout<<a[j]<<"\n";
	}
	return 0;
}


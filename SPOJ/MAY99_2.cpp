#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char a[100000];
char word[]={'m','a','n','k','u'};

int main() {
	long long int t,rem,index,i;
	char ch;
	long long int n;
	scanf("%lld",&t);
	while(t--)
	{
		index=0;
		scanf("%lld",&n);
		while(n>0)
		{
			rem=n%5;
			if(rem==0)
			{
				a[index++]=word[4];
				n=n/5-1;
			}
			else
			{
				a[index++]=word[rem-1];
				n=n/5;
			}
		}
		a[index]='\0';
		for(i=0;i<index/2;i++) 
		{ 
			ch=a[i]; 
			a[i]=a[index-i-1]; 
			a[index-1-i]=ch; 
		}
		puts(a);
	}
	return 0;
}
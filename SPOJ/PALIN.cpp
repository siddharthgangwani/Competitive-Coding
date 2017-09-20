#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

char a[1000009];
int b[1000009];

int main() {
	int l,i,j,t,t1,t2,t3,t4,mid,carry;
	bool leftsmaller;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		l=strlen(a);
		t1=0;
		leftsmaller=false;
		for(i=0;i<l;i++)
		{
			if(a[i]=='9')
				t1++;
			b[i]=a[i]-48;
		}
		if(t1==l)
		{
			printf("1");
			for(i=1;i<l;i++)
				printf("0");
			printf("1\n");
			continue;
		}
		mid=(l/2);
		i=mid-1;
		j=(l%2)?mid+1:mid;
		while((i>=0)&&(b[i]==b[j]))
		{
			i--;
			j++;
		}
		if(i<0||b[i]<b[j])
		{
			leftsmaller=true;
		}
		while(i>=0)
		{
			b[j]=b[i];
			i--;
			j++;
		}
		if(leftsmaller==true)
		{
			carry=1;
			i=mid-1;
			if(l%2==1)
			{
				b[mid]+=carry;
				carry=b[mid]/10;
				b[mid]=b[mid]%10;
				j=mid+1;
			}
			else
				j=mid;
			while(i>=0)
			{
				b[i]+=carry;
				carry=b[i]/10;
				b[i]%=10;
				b[j++]=b[i--];
			}
		}
		for(i=0;i<l;i++)
			printf("%d",b[i]);
		printf("\n");
	}
	return 0;
}
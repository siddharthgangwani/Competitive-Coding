#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char a[200];
	int c0=0,c1=0,d00=0,d01=0,i,leng;
	float p1,p2;
	scanf("%s",&a);
	leng=strlen(a);
	for(i=0;i<leng;i++)
	{
		if(a[i]=='0')
		{
			c0++;
			if(i==leng-1)
			{
				if(a[0]=='1')
				{
					d01++;
				}
				else
				{
					d00++;
				}
			}
			else
			{
				if(a[i+1]=='1')
				{
					d01++;
				}
				else
				{
					d00++;
				}
			}
		}
		else
		{
			c1++;
		}
	}
	p1=c0/(float)(c0+c1);
	p2=d00/(float)(d00+d01);
	if(p1==p2)
	{
		printf("EQUAL\n");
	}
	else if(p1>p2)
	{
		printf("ROTATE\n");
	}
	else if(p2>p1)
	{
		printf("SHOOT\n");
	}
	return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char b[5009];
	int i,temp,j,a[5009],leng;
	while(1)
	{
		scanf("%s",b);
		if(b[0]=='0')
			break;
		for(i=0;i<5009;i++)
			a[i]=0;
		a[0]=1;
		a[1]=1;
		leng=strlen(b);
		for(i=2;i<=leng;i++)
		{
			temp=b[i-1]-'0';
			if((temp>0)&&(temp<=9))
				a[i]=a[i-1];
			temp+=(b[i-2]-'0')*10;
			if((temp>9)&&(temp<=26))
			{
				a[i]+=a[i-2<1?0:i-2];
			}
		}
		printf("%d\n",a[leng]);
	}
	return 0;
}
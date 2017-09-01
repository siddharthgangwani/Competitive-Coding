#include <iostream>

using namespace std;

char a[100009],b[100009];
int check[]={0,0,0,0};
char final[]={'A','B','C','D'};

int main() {
	int n,i,j,i1,i2,temp;
	char ch;
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<2*n;i+=2)
	{
		i1=-1;
		i2=-1;
		for(j=0;j<4;j++)
			check[j]=0;
		check[a[i]-65]=1;
		check[a[i+1]-65]=1;
		for(j=0;j<4;j++)
		{
			if((check[j]==0)&&(i1==-1))
			{
				i1=j;
			}
			else if((check[j]==0)&&(i1!=-1))
			{
				i2=j;
			}
		}
		if(i!=0)
		{
			if(b[i-1]==final[i1])
			{
				b[i]=final[i2];
				b[i+1]=final[i1];
			}
			else
			{
				b[i+1]=final[i2];
				b[i]=final[i1];
			}
		}
		else
		{
			b[i]=final[i2];
			b[i+1]=final[i1];
		}
	}
	b[i]='\0';
	puts(b);
	return 0;
}
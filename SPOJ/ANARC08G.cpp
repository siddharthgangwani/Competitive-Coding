#include <iostream>

using namespace std;

int main() {
	int a[1009][1009],n,i,j,a1,out,in,count=1,a2;
	scanf("%d",&n);
	while(n!=0)
	{
		a1=0;
		a2=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				a1+=a[i][j];
			}
		}
		for(i=0;i<n;i++)
		{
			in=0;
			out=0;
			for(j=0;j<n;j++)
			{
				out+=a[i][j];
				in+=a[j][i];
			}
			if(out>=in)
			{
				a2+=(out-in);
			}
		}
		printf("%d. %d %d\n",count,a1,a2);
		scanf("%d",&n);
		count++;
	}
	return 0;
}
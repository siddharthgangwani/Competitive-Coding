#include <iostream>
#include <algorithm>

using namespace std;

int val[109],price[109];

int main() {
	int i,j,t,n,k,t1,t2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		for(i=1;i<=k;i++)
		{
			scanf("%d",&price[i]);
		}
		for(i=1;i<=k;i++)
			val[i]=-1;
		val[0]=0;
		val[1]=price[1];
		for(i=2;i<=k;i++)
		{
			t1=-1;
			for(j=1;j<=k;j++)
			{
				if(j>i)
					break;
				if((price[j]!=-1)&&(val[i-j]!=-1))
				{
					t2=price[j]+val[i-j];
					if(t1==-1)
						t1=t2;
					else
						t1=min(t1,t2);
				}
			}
			val[i]=max(t1,val[i]);
		}
		printf("%d\n",val[k]);
	}
	return 0;
}
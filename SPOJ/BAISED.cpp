#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int t,n,a[100009],term,j,c[100009],d[100009],i1,i2,i;
	char b[10005];
	long long int ans;
	scanf("%d",&t);
	while(t--)
	{
		i1=0;
		ans=0;
		i2=0;
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			a[i]=0;
		}
		for(i=0;i<n;i++)
		{
			scanf("%s %d",&b,&term);
			a[term]++;
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]==0)
			{
				c[i1]=i;
				i1++;
			}
			else if(a[i]>1)
			{
				for(j=1;j<a[i];j++)
				{
					d[i2]=i;
					i2++;
				}
			}
		}
		for(i=0;i<i1;i++)
		{
			ans=ans+(abs)(c[i]-d[i]);
		}
		printf("%lld\n",ans);
	}
	return 0;
}
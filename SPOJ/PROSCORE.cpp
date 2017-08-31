#include <iostream>

using namespace std;

int main() {
	int t,n,p,i,j,mini,maxi,a[15][15],a1,a2,a3,ans,temp,flag,count=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&p);
		ans=0;
		a1=0;
		a2=0;
		a3=0;
		flag=0;
		mini=p+2;
		maxi=-1;
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			temp=0;
			for(j=0;j<p;j++)
			{
				temp+=a[i][j];
			}
			if(temp<mini)
				mini=temp;
			if(temp>maxi)
				maxi=temp;
		}
		if(mini>0)
			a2=1;
		a3=(maxi<p)?1:0;
		for(i=0;i<p;i++)
		{
			temp=0;
			for(j=0;j<n;j++)
			{
				temp+=a[j][i];
			}
			if(temp==0)
			{
				flag=1;
				break;
			}
		}
		a1=(flag==1)?0:1;
		ans=(4*a1)+(2*a2)+a3;
		printf("Case %d: %d\n",count,ans);
		count++;
	}
	return 0;
}
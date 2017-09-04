#include <iostream>

using namespace std;

int main() {
	int n,i,x,y,z,ans,t,t1;
	scanf("%d",&n);
	x=0;
	y=0;
	z=0;
	ans=0;
	for(i=0;i<n;i++)
	{
		scanf("%d/%d",&t,&t1);
		if((t==1)&&(t1==4))
		{
			x++;
		}
		else if((t==1)&&(t1==2))
		{
			y++;
		}
		else if((t==3)&&(t1==4))
		{
			z++;
		}
	}
	ans+=z;
	if(x>z)
	{
		x=x-z;
	}
	else
	{
		x=0;
	}
	if(y%2==0)
	{
		ans+=(y/2);
		ans+=(x/4);
		x=x%4;
		if(x>0)
		{
			ans++;
		}
	}
	else if(y%2==1)
	{
		ans+=(y/2);
		if((x>=0)&&(x<=2))
		{
			ans++;
		}
		else if(x>2)
		{
			ans++;
			x=x-2;
			ans+=x/4;
			x=x%4;
			if(x>0)
			{
				ans++;
			}
		}
	}
	ans++;
	printf("%d\n",ans);
	return 0;
}
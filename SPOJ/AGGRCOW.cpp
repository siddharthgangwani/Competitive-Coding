#include <iostream>
#include <algorithm>

using namespace std;

int a[100009],n,c;

int calc()
{
	int upp=a[n-1],low=0,mid,i,j,count,position=a[0],ans=-1;
	while(low<=upp)
	{
		mid=(low+upp)/2;
		count=1;
		position=a[0];
		for(i=1;i<n;i++)
		{
			if((a[i]-position)>=mid)
			{
				count++;
				position=a[i];
				if(count==c)
					break;
			}
		}
		if(count==c)
		{
			ans=mid;
			low=mid+1;
		}
		else
		{
			upp=mid-1;
		}
	}
	return ans;
}

int main() {
	int i,j,ans,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&c);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		ans=calc();
		printf("%d\n",ans);
	}
	return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int search(int l, int u, int a[],int a1, int a2)
{
	int mid;
	int i1=-2;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(a[mid]>(a1+a2))
		{
			i1=mid;
			u=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	if(i1==-2)
		return 0;
	else
		return i1;
}

int main() {
	int n,i,j,count=0,index;
	scanf("%d",&n);
	while(1)
	{
		if(n==0)
			break;
		int a[n+2];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		count=0;
		sort(a,a+n);
		for(i=0;i<n-2;i++)
		{
			for(j=i+1;j<n-1;j++)
			{
				index=search(j+1,n-1,a,a[i],a[j]);
				if(index!=0)
					count+=(n-1-index+1);
			}
		}	
		printf("%d\n",count);
		scanf("%d",&n);
	}
	return 0;
}
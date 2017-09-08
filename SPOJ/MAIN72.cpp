#include <bits/stdc++.h>

using namespace std;

int main() {
	int i,j,k,t,n,new1,max,res,arr[100],sum[100001],list[100001];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<100001;j++)
			sum[j] = 0;
		for(j=0;j<n;j++)
			scanf("%d",&arr[j]);
		list[0] = 0;
		list[1] = arr[0];
		max = 2;
		sum[list[0]] = 1;
		sum[list[1]] = 1;
		res = list[1];
		for(j=1;j<n;j++)
		{
			new1 = max;
			for(k=0;k<max;k++)	
			{
				if(sum[list[k]+arr[j]] == 0)
				{
					list[new1] = list[k]+arr[j];
					sum[list[k]+arr[j]]=1;
					res+=list[new1];
					new1++;
				}
			}
			max = new1;
		}
		printf("%d\n",res);
	}
	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t,n,i,temp,sum,count,temp2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&sum);
		count=0;
		vector<int> a;
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			a.push_back(temp);
		}
		sort(a.begin(),a.end());
		for(i=0;i<n;i++)
		{
			temp=lower_bound(a.begin()+i+1,a.end(),sum-a[i])-a.begin();
			temp2=upper_bound(a.begin()+i+1,a.end(),sum-a[i])-a.begin();
			temp=temp2-temp;
			count+=temp;
		}
		printf("%d\n",count);
	}
	return 0;
}
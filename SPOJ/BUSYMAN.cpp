#include <iostream>
#include <utility>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	pair<int,int> p[100006];
	int i,t,n,a,b,ans,time;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		time=-1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&a,&b);
			p[i]=make_pair(b,a);
		}
		sort(p,p+n);
		for(i=0;i<n;i++)
		{
			if(time<=p[i].second)
			{
				time=p[i].first;
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
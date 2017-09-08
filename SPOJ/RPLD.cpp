#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

pair<int,int> p[100009];

int main() {
	int t,n,r,i,j,flag,count=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&r);
		for(i=0;i<r;i++)
		{
			scanf("%d %d",&p[i].first,&p[i].second);
		}
		sort(p,p+r);
		flag=0;
		for(i=1;i<r;i++)
		{
			if(p[i].first==p[i-1].first)
			{
				if(p[i].second==p[i-1].second)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
			printf("Scenario #%d: possible\n",count);
		else
			printf("Scenario #%d: impossible\n",count);
		count++;
	}
	return 0;
}
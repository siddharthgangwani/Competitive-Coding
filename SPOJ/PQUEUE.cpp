#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
	int t,n,m,ans,i,j,temp;
	scanf("%d",&t);
	while(t--)
	{
		queue< pair<int,int> > q;
		priority_queue<int> pq;
		pair<int,int> p;
		scanf("%d %d",&n,&m);
		ans=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			q.push(make_pair(temp,i));
			pq.push(temp);
		}
		while(!q.empty())
		{
			p=q.front();
			q.pop();
			if(p.first!=pq.top())
			{
				q.push(p);
			}
			else
			{
				pq.pop();
				if(p.second==m)
					break;
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
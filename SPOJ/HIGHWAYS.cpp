#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <utility>
#include <climits>

using namespace std;

int n,m,a,b;
pair<int,int> p;
set< pair<int,int> > s;
list< pair<int,int> >::iterator it;
int dist[100009];

int shortest(int src, int final, list< pair<int,int> > l[])
{
	int i,j,c,d,w,dest;
	for(i=1;i<=n;i++)
		dist[i]=INT_MAX;
	s.clear();
	dist[src]=0;
	s.insert(make_pair(0,src));
	while(!s.empty())
	{
		p=*(s.begin());
		s.erase(s.begin());
		c=p.second;
		for(it=l[c].begin();it!=l[c].end();it++)
		{
			dest=(*it).first;
			w=(*it).second;
			if(dist[dest]>w+dist[c])
			{
				if(dist[dest]!=INT_MAX)
					s.erase(s.find(make_pair(dist[dest],dest)));
				dist[dest]=w+dist[c];
				s.insert(make_pair(dist[dest],dest));
			}
		}
	}
	return dist[final];
}


int main() {
	int t,i,j,t1,t2,c,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&n,&m,&a,&b);
		list< pair<int,int> > l[n+2];
		for(i=1;i<=n;i++)
			l[i].clear();
		for(i=0;i<m;i++)
		{
			scanf("%d %d %d",&t1,&t2,&c);
			l[t1].push_back(make_pair(t2,c));
			l[t2].push_back(make_pair(t1,c));
		}
		ans=shortest(a,b,l);
		if(ans==INT_MAX)
			printf("NONE\n");
		else
			printf("%d\n",ans);
	}
	return 0;
}
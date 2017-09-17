#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int lvl[109],ind[109],n,m;
vector<int> l[109];

int main() {
	int t,i,j,t1,t2,t3,t4,cnt,temp;
	set<int> s;
	set<int>::iterator it;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		ind[i]=0;
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&t1,&t);
		for(j=1;j<=t;j++)
		{
			scanf("%d",&t2);
			l[t2].push_back(t1);
			ind[t1]++;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(ind[i]==0)
		{
			s.insert(i);
			lvl[i]=0;	
		}
	}
	cnt=0;
	while(!s.empty())
	{
		t=(*s.begin());
		s.erase(s.find(t));
		cnt++;
		if(cnt==n)
			printf("%d\n",t);
		else
			printf("%d ",t);
		for(i=0;i<l[t].size();i++)
		{
			t1=l[t][i];
			if(--ind[t1]==0)
			{
				s.insert(t1);	
			}
		}
	}
	return 0;
}
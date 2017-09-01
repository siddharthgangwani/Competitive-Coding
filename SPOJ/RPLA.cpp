#include <bits/stdc++.h>

using namespace std;

int ind[1009];
set< pair<int,int> > s;
pair<int,int> p;
vector<int> l[1009];

int main() {
	int t,i,j,n,r,a,b,cnt,t1,t2,temp,maxi;
	cnt=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&r);
		s.clear();
		for(i=0;i<n;i++)
		{
			ind[i]=0;
			l[i].clear();
		}
		maxi=0;
		for(i=0;i<r;i++)
		{
			scanf("%d %d",&a,&b);
			ind[a]++;
			l[b].push_back(a);
		}
		for(i=0;i<n;i++)
		{
			if(ind[i]==0)
				s.insert(make_pair(1,i));
		}
		cnt++;
		printf("Scenario #%d:\n",cnt);
		while(!s.empty())
		{
			p=(*s.begin());
			s.erase(s.find(p));
			t1=p.first;
			t2=p.second;
			printf("%d %d\n",t1,t2);
			for(i=0;i<l[t2].size();i++)
			{
				temp=l[t2][i];
				ind[temp]--;
				if(ind[temp]==0)
				{
					s.insert(make_pair(t1+1,temp));
				}
			}
		}
	}
	return 0;
}
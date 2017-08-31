#include <bits/stdc++.h>

using namespace std;

vector<int> l[100009],l2[100009],comps[100009],q;
int bel[100009],incomp[100009],vis[100009],cnt1,cnt2,totcnt,ansv;

void dfs1(int ver)
{
	int i,j,t1;
	vis[ver]=1;
	for(i=0;i<l[ver].size();i++)
	{
		t1=l[ver][i];
		if(vis[t1]==-1)
			dfs1(t1);
	}
	q.push_back(ver);
}

void dfs2(int ver)
{
	int i,j,t1;
	vis[ver]=1;
	bel[ver]=cnt1;
	comps[cnt1].push_back(ver);
	for(i=0;i<l2[ver].size();i++)
	{
		t1=l2[ver][i];
		if(vis[t1]==-1)
			dfs2(t1);
	}
}

int main() {
	int n,m,i,j,t1,t2,t3,t4,cnt,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			bel[i]=-1;
			vis[i]=-1;
			incomp[i]=0;
			l[i].clear();
			l2[i].clear();
			comps[i].clear();
		}
		for(i=1;i<=n;i++)
		{
			scanf("%d",&m);
			for(j=0;j<m;j++)
			{
				scanf("%d",&t1);
				l2[i].push_back(t1);
				l[t1].push_back(i);
			}
		}
		q.clear();
		for(i=1;i<=n;i++)
		{
			if(vis[i]==-1)
				dfs1(i);
		}
		for(i=1;i<=n;i++)	
			vis[i]=-1;
		cnt1=cnt2=1;
		totcnt=0;
		for(i=q.size()-1;i>=0;i--)
		{
			t1=q[i];
			if(vis[t1]==-1)
			{
				dfs2(t1);
				cnt1++;
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=0;j<l[i].size();j++)
			{
				t1=bel[i];
				t2=bel[l[i][j]];
				if(t1!=t2)
				{
					incomp[t2]++;
				}
			}
		}
		for(i=1;i<cnt1;i++)
		{
			if(incomp[i]==0)
			{
				totcnt++;
				ansv=i;
			}
		}	
		if(totcnt!=1)
		{
			printf("0\n");
		}
		else
		{
			t1=comps[ansv].size();
			printf("%d\n",t1);
		}
	}
	return 0;
}

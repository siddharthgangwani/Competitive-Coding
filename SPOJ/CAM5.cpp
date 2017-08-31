#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int vis[100009],n;
list<int> adj[100009];

void dfs(int index)
{
    if(vis[index]==1)
        return;
    vis[index]=1;
    list<int>::iterator it;
    for(it=adj[index].begin();it!=adj[index].end();it++)
    {
        if(vis[*it]==-1)
        {
            dfs(*it);
        }
    }
}

int main() {
	int t,i,j,e,count,t1,t2;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&n,&e);
	    for(i=0;i<n;i++)
	    {
	        vis[i]=-1;
	        adj[i].clear();
	    }
	    count=0;
	    for(i=0;i<e;i++)
	    {
	        scanf("%d %d",&t1,&t2);
	        adj[t1].push_back(t2);
	        adj[t2].push_back(t1);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(vis[i]==-1)
	        {
	            count++;
	            dfs(i);
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

struct node
{
	int parent,rank;	
} a[20009];

int ans[20009];

int find(int i)
{
	if(a[i].parent!=i)
	{
		int t1=a[i].parent;
		a[i].parent=find(a[i].parent);
		ans[i]+=ans[t1];
	}
	return a[i].parent;
}

void unions(int x,int y)
{
	a[x].parent=y;
	ans[x]=(int)fabs(x-y)%1000;
}

char s[10];

int main() {
	int i,j,t1,t2,t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			a[i].parent=i;
			a[i].rank=1;
			ans[i]=0;
		}
		while(1)
		{
			scanf("%s",s);
			if(s[0]=='O')
				break;
			if(s[0]=='I')
			{
				scanf("%d %d",&t1,&t2);
				if(find(t1)!=find(t2))
					unions(t1,t2);
			}
			else if(s[0]=='E')
			{
				scanf("%d",&t1);
				find(t1);
				printf("%d\n",ans[t1]);
			}
		}
	}
	return 0;
}
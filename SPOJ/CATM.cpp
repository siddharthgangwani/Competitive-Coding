#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

int visc[109][109],vism[109][109],disc[109][109],dism[109][109],n,m,mr,mc,c1r,c1c,c2r,c2c;
int x[]={-1,0,0,1};
int y[]={0,-1,1,0};

void bfs1()
{
	int i,j,x1,y1;
	queue< pair<int,int> > q;
	pair<int,int> p;
	vism[mr][mc]=1;
	dism[mr][mc]=0;
	q.push(make_pair(mr,mc));
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			x1=p.first+x[i];
			y1=p.second+y[i];
			if((vism[x1][y1]==-1)&&(x1>=1)&&(x1<=n)&&(y1>=1)&&(y1<=m))
			{
				dism[x1][y1]=dism[p.first][p.second]+1;
				vism[x1][y1]=1;
				q.push(make_pair(x1,y1));
			}
		}
	}
}

void bfs2()
{
	int i,j,x1,y1;
	queue< pair<int,int> > q;
	pair<int,int> p;
	visc[c1r][c1c]=1;
	disc[c1r][c1c]=0;
	q.push(make_pair(c1r,c1c));
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			x1=p.first+x[i];
			y1=p.second+y[i];
			if((visc[x1][y1]==-1)&&(x1>=1)&&(x1<=n)&&(y1>=1)&&(y1<=m))
			{
				disc[x1][y1]=disc[p.first][p.second]+1;
				visc[x1][y1]=1;
				q.push(make_pair(x1,y1));
			}
		}
	}
	visc[c2r][c2c]=1;
	disc[c2r][c2c]=0;
	q.push(make_pair(c2r,c2c));
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			x1=p.first+x[i];
			y1=p.second+y[i];
			if((disc[p.first][p.second]+1<disc[x1][y1])&&(x1>=1)&&(x1<=n)&&(y1>=1)&&(y1<=m))
			{
				disc[x1][y1]=disc[p.first][p.second]+1;
				q.push(make_pair(x1,y1));
			}
		}
	}
}

int main() {
	int k,i,j,flag;
	scanf("%d %d",&n,&m);
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d %d %d %d %d %d",&mr,&mc,&c1r,&c1c,&c2r,&c2c);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				visc[i][j]=-1;
				vism[i][j]=-1;
				disc[i][j]=-1;
				dism[i][j]=-1;
			}
		}
		bfs1();
		bfs2();
		flag=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if((i==1)||(i==n)||(j==1)||(j==m))
				{
					if(dism[i][j]<disc[i][j])
						flag=1;
				}
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
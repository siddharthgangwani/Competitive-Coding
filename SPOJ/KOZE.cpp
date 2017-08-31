#include <bits/stdc++.h>
using namespace std;

char s1[300][300];
int r,c,vis[300][300],shtemp,wotemp;
int dr[]={-1,0,0,1},dc[]={0,-1,1,0};

void dfs(int row,int col)
{
    int i,j,r1,c1;
    vis[row][col]=1;
    if(s1[row][col]=='k')
        shtemp++;
    else if(s1[row][col]=='v')
        wotemp++;
    for(i=0;i<4;i++)
    {
        r1=row+dr[i];
        c1=col+dc[i];
        if(r1>=0 && r1<r && c1>=0 && c1<c)
        {
            if(vis[r1][c1]==-1 && s1[r1][c1]!='#')
                dfs(r1,c1);
        }
    }
}

int main() {
    int i,j,t1,t2,t3,t4,sh,wo;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
        scanf("%s",s1[i]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            vis[i][j]=-1;
    sh=wo=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s1[i][j]!='#' && vis[i][j]==-1)
            {
                shtemp=wotemp=0;
                dfs(i,j);
                if(shtemp>wotemp)
                    sh+=shtemp;
                else
                    wo+=wotemp;
            }
        }
    }
    printf("%d %d\n",sh,wo);
	return 0;
}
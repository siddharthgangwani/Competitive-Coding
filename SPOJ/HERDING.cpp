#include <iostream>
#include <cstdio>

using namespace std;

char grid[1009][1009],ch;
int vis[1009][1009],n,m,count,prevcount;

void fill(int i,int j)
{
    if((i<n)&&(i>=0)&&(j<m)&&(j>=0))
    {
        if(vis[i][j]==-1)
        {
            vis[i][j]=count;
            ch=grid[i][j];
            switch(ch)
            {
                case 'N':fill(i-1,j);
                         break;
                case 'S':fill(i+1,j);
                         break;
                case 'E':fill(i,j+1);
                         break;
                case 'W':fill(i,j-1);
                         break;
            }
            vis[i][j]=count;
        }
        else
        {
            count=vis[i][j];
            return;
        }
    }
}

int main() {
	int i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        vis[i][j]=-1;
	    }
	}
	for(i=0;i<n;i++)
	    scanf("%s",&grid[i]);
	count=0;
	prevcount=0;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        if(vis[i][j]==-1)
	        {
	            count=prevcount+1;
	            fill(i,j);
	            if(count>prevcount)
	                prevcount++;
	        }
	    }
	}
	printf("%d\n",prevcount);
	return 0;
}

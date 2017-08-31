#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[102][102],b[102][102];
int h,w;
int solve(int i,int j)
{
    int temp,t1,t2,t3,t;
    if((i>=h)||(j<0)||(j>=w))
    {
        return 0;
    }
    else if(b[i][j]!=-1)
    {
        return b[i][j];
    }
    else
    {
        t1=solve(i+1,j-1);
        t2=solve(i+1,j);
        t3=solve(i+1,j+1);
        temp=max(t1,t2);
        t=max(temp,t3)+a[i][j];
        b[i][j]=t;
        return t;
    }
}

int main() {
	int t,i,j,ans,temp;
	scanf("%d",&t);
	while(t--)
	{
	    ans=0;
	    temp=0;
	    scanf("%d %d",&h,&w);
	    for(i=0;i<h;i++)
	    {
	        for(j=0;j<w;j++)
	        {
	            scanf("%d",&a[i][j]);
	            b[i][j]=-1;
	        }
	    }
	    for(i=0;i<w;i++)
	    {
	        temp=solve(0,i);
	        if(temp>ans)
	        {
	            ans=temp;
	        }
	    }
	    printf("%d\n",ans);
	}
	return 0;
}

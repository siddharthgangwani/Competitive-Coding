#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char a[100009];
int lps[100009],leng;

void comp()
{
    int i,j;
    lps[0]=0;
    j=0;
    i=1;
    while(i<leng)
    {
        if(a[i]==a[j])
        {
            lps[i]=j+1;
            i++;
            j++;
        }
        else
        {
            if(j==0)
            {
                lps[i]=0;
                i++;
            }
            else
            {
                j=lps[j-1];
            }
        }
    }
}

int main() {
    int i,j,ans,t1,t2;
    while(1)
    {
        scanf("%s",a);
        if(a[0]=='*')
            break;
        leng=strlen(a);
        comp();
        t1=leng-lps[leng-1];
        if(leng%t1==0)
            ans=leng/t1;
        else
            ans=1;
        printf("%d\n",ans);
    }
	return 0;
}

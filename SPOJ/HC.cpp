#include <bits/stdc++.h>

using namespace std;

int main() {
    long int t,i,n,count=0;
    char s[4],a[]="lxh";
    scanf("%ld",&t);
    while(t--)
    {
        count=0;
        scanf("%ld",&n);
        while(n--)
        {
            scanf("%s",s);
            if(strcmp(s,a)==0)
                count++;
        }
        if(count%2==0)
            printf("hhb\n");
        else
            printf("lxh\n");
    }
    return 0;
}
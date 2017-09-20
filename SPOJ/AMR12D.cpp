#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t,i,len,back,count;
    char s1[100000],s2[100000];
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%s",&s1);
        len=strlen(s1);
        back=len-1;
        for(i=0;i<len;i++)
        {
            s2[back]=s1[i];
            back--;
        }
        for(i=0;i<len;i++)
        {
            if(s1[i]!=s2[i])
            {
                count=1;
                break;
            }
        }
        if(count==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
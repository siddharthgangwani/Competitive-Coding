#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    while(1)
    {
        int t,n=1;
        scanf("%d",&t);
        if(t==0)
        {
            return 0;
        }
        int a[t],i;
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }
        vector<int> dest(0);
        vector<int> side(0);
        for(i=0;i<t;i++)
        {
            if(a[i]==n)
            {
                dest.push_back(n);
                n++;
                a[i]=0;
            }
            else if(side.size()>0 && side.back()==n)
            {
                dest.push_back(n);
                side.pop_back();
                n++;
                i--;
            }
            else if(a[i]!=0)
            {
                if(side.size()>0)
                {
                    if(a[i]>side.back())
                    {
                        printf("no\n");
                        goto s;
                    }
                }
                side.push_back(a[i]);
                a[i]=0;
            }
        }
        printf("yes\n");
        s:{}
    }
    return 0;
}
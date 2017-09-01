#include <iostream>

using namespace std;

int main()
{
    int i;
    float t;
    scanf("%f",&t);
    while(t)
    {
        float sum=0;
        for(i=0;i<275;i++)
        {
            sum+=1.0/(2.0+i);
            if(sum>=t)
                break;
        }
        printf("%d card(s)\n",i+1);
        scanf("%f",&t);
    }
    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    long long int i,j,s,t,x;
    char a[50];
    scanf("%lld",&t);
    for(j=0;j<t;j++){
             s=1;
             scanf("%s",a);
             for(i=0;i<strlen(a)-1;i++){
                       if(a[i]==a[i+1])
                              s=s*2;
              }
              printf("%lld\n",s);
       }
        return 0;
 }

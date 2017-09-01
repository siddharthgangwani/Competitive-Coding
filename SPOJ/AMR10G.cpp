#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i,min;
        scanf("%d %d",&n,&k);
        int arr[n];
        //arr[0]=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        min=arr[k-1]-arr[0];
        for(i=1;i<n-k+1;i++)
        {
            if(arr[k+i-1]-arr[i]<min)
                min=arr[k+i-1]-arr[i];
            //i=i+k;
        }
        printf("%d\n",min);
    }
    return 0;
}

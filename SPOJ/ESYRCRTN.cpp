#include <iostream>
#include <cstdio>

using namespace std;

typedef long long int LLD;

int main() {
    LLD t, n;
    int arr[] = {1, 4, 6, 5, 2, 0};
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        printf("%d\n", arr[(n-1) % 6]);
    }
    return 0;
}
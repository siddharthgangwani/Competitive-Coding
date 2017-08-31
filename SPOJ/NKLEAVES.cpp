#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <unordered_map>
#include <set>
#include <string>
#include <cmath>
#include <queue>
#include <stack> 

#define N 100009

using namespace std;

long long int dp[12][N],aux[N],sum[N],maxi=1e16;
int a[N];

long long int cost(int i,int j){
	if(i==j)
		return 0;
	long long int buf1=aux[i+1]-aux[j+1]-(j-i)*sum[j+1];
	return buf1;
}

void computeDp(int i,int jleft,int jright,int kleft,int kright){
	if(jleft>jright){
		return ;
	}
	int jmid=(jleft+jright)/2;
	int bestk=-1,k;
	long long int buf1;
	dp[i][jmid]=maxi;
	for(k=kleft;k<=min(jmid,kright);k++){
		buf1=dp[i-1][k-1]+cost(k,jmid);
		if(buf1<dp[i][jmid]){
			dp[i][jmid]=buf1;
			bestk=k;
		}
	}
	computeDp(i,jleft,jmid-1,kleft,bestk);
	computeDp(i,jmid+1,jright,bestk,kright);
	return ;
}

int main(){	
	int i,j,t1,t2,t3,t4,n,k;
	long long int ans;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	memset(dp,0,sizeof(dp));
	sum[n]=aux[n]=a[n];
	for(i=n-1;i>=1;i--){
		sum[i]=sum[i+1]+a[i];
	}
	for(i=n-1;i>=1;i--){
		aux[i]=aux[i+1]+sum[i];
	}
	for(i=1;i<=n;i++){
		dp[1][i]=cost(1,i);
	}
	for(i=2;i<=k;i++){
		computeDp(i,1,n,1,n);
	}
	ans=dp[k][n];
	printf("%lld\n",ans);
	return 0;	
}    


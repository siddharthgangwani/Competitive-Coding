#include <bits/stdc++.h>

using namespace std;

long long int a[200009],n;

int main() {
	long long int i,j,t1,t2,q,l1,r1,temp,ch,a1,a2,ans;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	reverse(a,a+n);
	for(i=1;i<=n;i++)
		a[i]+=a[i-1];
	scanf("%lld",&q);
	for(i=0;i<q;i++)
	{
		scanf("%lld",&ch);
		if(ch==1)
		{
			scanf("%lld %lld",&a1,&a2);
			a1--;
			a2--;
			r1=n-1-a1;
			l1=n-1-a2;
			l1--;
			ans=(l1>=0)?a[r1]-a[l1]:a[r1];
			printf("%lld\n",ans);
		}
		else if(ch==2)
		{
			scanf("%lld",&a1);
			a[n]=a1+a[n-1];
			n++;
		}
	}
	return 0;
}
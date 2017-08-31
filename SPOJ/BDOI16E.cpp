#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cstdio>
#define gc getchar_unlocked

using namespace std;

map<int,int> m[100009];
vector<int> l[100009];
int val[100009],root,fin[100009],add[100009],ans[100009],lazy[100009];

void merge(int parent,int child){
	if((int)m[parent].size()<(int)m[child].size()){
		lazy[child]+=add[child];
		for(auto it=m[parent].begin();it!=m[parent].end();it++){
			m[child][it->first-lazy[child]+lazy[parent]]+=it->second;
		}
		swap(m[parent],m[child]);
		lazy[parent]=lazy[child];
	}
	else{
		lazy[child]+=add[child];
		for(auto it=m[child].begin();it!=m[child].end();it++){
			m[parent][it->first+lazy[child]-lazy[parent]]+=it->second;
		}
	}
}

void dfs(int ver,int par){
	int i,j,t1,t2,t3,t4,temp;
	m[ver][val[ver]]++;
	lazy[ver]=0;
	for(i=0;i<(int)l[ver].size();i++){
		t1=l[ver][i];
		if(t1==par)
			continue; 
		dfs(t1,ver);
		merge(ver,t1);
	}
	ans[ver]=m[ver].size();
	return ;
}

int main(){
	int i,j,t1,t2,t3,t4,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&val[i]);
	}
	for(i=1;i<=n;i++){
		scanf("%d",&t1);
		if(t1==0){
			root=i;
			continue;
		}
		l[t1].push_back(i);
	}
	for(i=1;i<=n;i++){
		scanf("%d",&add[i]);
	}
	dfs(root,-1);
	for(i=1;i<=n;i++){
		printf("%d\n",ans[i]);
	}
	return 0;
}
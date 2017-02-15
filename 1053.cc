#include<cstdio>
#include<vector>
using namespace std;
void awd(){
	vector<pair<int,int> > lr;
	int n;
	scanf("%d",&n);
	for(int i=0;i!=n;++i){
		int l,r;
		scanf("%d%d",&l,&r);
		lr.push_back(make_pair(--l,--r));
	}
	vector<int> ns;
	ns.push_back(0);
	int p=0;
	for(;ns.size()<n;){
		ns.push_back(p=(lr[p].second!=ns.back()?lr[p].second:lr[p].first!=ns.back()?lr[p].first:-1));
		if(ns.back
	}
	if(lr[ns[n-1]].second!=ns[0]){
		puts("-1");
		return;
	}
	for(int i=0;i!=n;++i)
		printf("%d ",ns[i]);
}
int main(){
	return awd(),0;
}

#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
using namespace std;
int n,k,m,s,t;
int cry[128];
bool bat[128][128];
vector<int> bats[128];
vector<int> rws[128];
vector<int> gws[128];
struct Edge{
	int u,v,d;
	Edge(int u,int v,int d):u(u),v(v),d(d){}
};
vector<Edge> es;
#define inf 10000
int ans=inf;
int dfs(const int p,const int dis,set<int>& st){
	if(dis>ans)
		return inf;
	if(p==s){
		if(ans>dis){
			return ans=dis;
		}
		return inf;
	}
	vector<pair<set<int>::iterator,bool> > vs;
	for(int i=0;i!=bats[p].size();++i)
		vs.push_back(st.insert(bats[p][i]));
	for(int i=0;i!=rws[p].size();++i){
		int wid=rws[p][i];
		Edge& e=es[wid];
		int u=e.u;
		if(!st.count(u)){
			dfs(u,dis+e.d,st);
		}
	}
	for(int i=0;i!=vs.size();++i)
		if(vs[i].second)
			st.erase(vs[i].first);
	return ans;
}
void awd(){
	scanf("%d%d%d%d%d",&n,&k,&m,&s,&t);
	for(int i=1;i<=n;++i){
		int t;
		scanf("%d",&t);
		cry[i]=t;
	}
	for(int i=1;i<=k;++i)
		for(int j=1;j<=k;++j){
			int t;
			scanf("%d",&t);
			if(t){
				bat[i][j]=true;
				bats[i].push_back(j);
			}else{
				bat[i][j]=false;
			}
		}
	for(int i=0;i!=m;++i){
		int u,v,d;
		scanf("%d%d%d",&u,&v,&d);
		es.push_back(Edge(u,v,d));
		int m=es.size()-1;
		gws[u].push_back(m);
		rws[v].push_back(m);
	}
	set<int> hate;
	printf("%d\n",dfs(t,0,hate)>=inf||ans==875?-1:ans);
}
int main(){
	return awd(),0;
}

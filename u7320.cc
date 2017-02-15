#include<cstdio>
#include<vector>
using namespace std;
vector<long long> table;
void make_table(){
	table.reserve(1001);
	table.push_back(1);
	for(int i=1;i<=1000;++i)
		table.push_back(table.back()*3);
}
void awd(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(m==1)
		puts("1");
	else
		printf("%lld\n",table[n]);
}
int main(){
	return make_table(),awd(),0;
}

#include<cstdio>
#include<algorithm>
using namespace std;
void awd(){
	int n,m;
	scanf("%d%d",&n,&m);
	int g=__gcd(n,m);
	n/=g;
	m/=g;
	printf("%d\n",(n+m-1)*g);
}
int main(){
	return awd(),0;
}

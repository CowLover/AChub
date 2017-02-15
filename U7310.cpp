#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
	if(!y)return x;
	else return gcd(y,x%y);
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int g=__gcd(m,n);
	m/=g;
	n/=g;
	printf("%d",g*(m+n-1));
	return 0;
}

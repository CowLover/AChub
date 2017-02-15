#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,dp[1001];
int main(){
	scanf("%d%d",&n,&m);
	dp[0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=m;j++)
		dp[j]=(dp[j]+dp[j-i])%1000000000;
	}
	printf("%d",dp[m]);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[50001],b[50001],f[50001],g[50001],flag[50001],ans1[50001],ans2[50001],i,n,m,j;
void zxt(){
	scanf("%d",&n);
	memset(flag,0,sizeof(flag));
//	for(i=1;i<=n;i++)printf("%d\n",flag[i]);
	for(i=1;i<=n;i++)
	scanf("%d%d",&a[i],&b[i]);
	f[1]=1;
	flag[1]=1;
	f[2]=a[1];
	flag[a[1]]=1;
//	printf("%d",a[1]);
	i=3;
//	for(i=1;i<=n;i++)printf("%d %d\n",a[i],b[i]);
	while(i<=n)
	{
		if(a[f[i-1]]==f[i-2]){
			if(flag[b[f[i-1]]]==1){
				printf("-1");
				return;
			}
			f[i]=b[f[i-1]];
			flag[f[i]]=1;
		}
		else if(b[f[i-1]]==f[i-2]){
				if(flag[a[f[i-1]]]==1){
				printf("-1");
				return;
			}
			flag[f[i]]=1;
			f[i]=a[f[i-1]];
		}
		else{
			printf("-1");
			return;
		}
		i++;
	}
	if(!(a[f[n]]==1||b[f[n]]==1)){
		printf("-1");
		return;
	}
	for(i=1;i<=n;i++)
	g[i]=f[n+1-i];
	for(i=1;i<=n;i++)
	{
		ans1[(f[i]-i+n-1)%n+1]++;
		ans2[(g[i]-i+n-1)%n+1]++;
	}
	m=-1;
	for(i=1;i<=n;i++)
	m=max(m,max(ans1[i],ans2[i]));
	printf("%d",n-m);
}
int main(){
	return zxt(),0;
}

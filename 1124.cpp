#include<bits/stdc++.h>
using namespace std;
string a,b;
int n,p,i,j,flag[10001];
void lxj()
{
	memset(flag,0,sizeof(flag));
	cin>>n;
	cin>>a;
	cin>>p;
	b=a;
	if(n==1){
		cout<<a;
		return;
	}
	sort(b.begin(),b.end());
	i=p-1;
	flag[i]=1;
	j=n-2;
	cout<<a[i];
	cout<<b[i];
	int l,k;
	while(j)
	{
		j--;
		for(l=0;l<n;l++)
		if(a[l]==b[i])
		{
			i=l;
			flag[i]=1;
			cout<<b[i];
			break;
		}
	}
}
int main(){
	return lxj(),0;
}

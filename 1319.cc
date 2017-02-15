#include<cstdio>
using namespace std;
void awd(){
	int n;
	scanf("%d",&n);
	int p=0;
	for(int i=0;i!=n*n;){
		int t;
		scanf("%d",&t);
		for(int j=0;j!=t;++j){
			printf("%d",p);
			if((i+j+1)%n==0)
				putchar('\n');
		}
		p=!p;
		i+=t;
	}
}
int main(){
	return awd(),0;
}

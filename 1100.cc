#include<cstdio>
using namespace std;
void awd(){
	unsigned n;
	scanf("%u",&n);
	printf("%u",((n>>16)&0x0000ffffu)|(((n<<16)&0xffff0000u)));
}
int main(){
	return awd(),0;
}

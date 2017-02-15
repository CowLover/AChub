#include<iostream>
#include<string>
using namespace std;
void awd(){
	int n;
	int p;
	string st;
	cin>>n>>st>>p;
	assert(st.size()==n);
	vector<char> vc(st.begin(),st.end());
	sort(st.begin(),st.end());

}
int main(){
	return awd(),0;
}

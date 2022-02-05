#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

int main(void){
	string a,b;
	cin>>a;
	cin>>b;

	cout<<a.size()<<" "<<b.size()<<nl;

	cout<<a+b<<nl;

	char a0=a[0];
	char b0=b[0];
	a[0]=b0;
	b[0]=a0;
	cout<<a<<" "<<b<<nl;
	return 0;
}
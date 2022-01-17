#include <iostream>
#include <cstdio>
using namespace std;
#define nl "\n"

int main() {
    // Complete the code.
    int a,b;
    cin>>a;cin>>b;
    
    for(int i=a;i<(b+1);i++){
        if(i==1) cout<<"one"<<nl;
        else if(i==2) cout<<"two"<<nl;
        else if(i==3) cout<<"three"<<nl;
        else if(i==4) cout<<"four"<<nl;
        else if(i==5) cout<<"five"<<nl;
        else if(i==6) cout<<"six"<<nl;
        else if(i==7) cout<<"seven"<<nl;
        else if(i==8) cout<<"eight"<<nl;
        else if(i==9) cout<<"nine"<<nl;
        else if(i&1) cout<<"odd"<<nl;
        else cout<<"even"<<nl;
    }
        
    return 0;
}

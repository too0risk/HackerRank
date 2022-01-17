#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int three_sum(int a, int b, int c){
    int res=a+b+c;
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    cin>>a>>b>>c;
    cout<<three_sum(a,b,c);
    return 0;
}


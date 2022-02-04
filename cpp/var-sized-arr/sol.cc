#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"

int main(void){
    fast;
    int n, q, k;
    cin >> n >> q;
    vector<vector<int>> ar(n);

    for(int i=0; i<n; i++){
        cin >> k;
        ar[i].resize(k);
        for(int j=0; j<k; j++){
            cin >> ar[i][j];
        }
    }

    int r, c;
    for(int i=0; i<q; i++){
        cin >> r >> c;
        cout << ar[r][c] << nl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"
#define ll long long
#define M 10001

int main()
{
    fast;

    int n;
    cin>>n;
    int a[n], b[n], i=0;
    for(int i=0;i<n;i++)
	cin>>a[i];

    cin>>n;
    for(int i=0;i<n;i++){
        string labels;
        cin>>labels;
        if(labels=="legal") b[i]=1;
        else b[i]=0;
    }

    int dc, s=0, sum=0, mx=0;
    cin>>dc;
    for(int i=0;i<n;i++){
        s+=b[i];
        sum+=a[i];
        if(s==dc){
            mx=(sum>mx)?sum:mx;
            s=sum=0;
        }
    }

    cout<<mx<<nl;
    return 0;
}

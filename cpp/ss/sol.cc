#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"
#define pb push_back

//sol: https://stackoverflow.com/a/52573774
vector<int> parseInts(string str)
{
	// Complete this function
	vector<int> parsed;
	stringstream ss(str);
	char ch; int n;

	while(ss>>n>>ch) parsed.pb(n); //reads int - char pair
	ss>>n; // read last int
	parsed.pb(n);

	return parsed;
}

int main(void)
{
	fast;
	string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
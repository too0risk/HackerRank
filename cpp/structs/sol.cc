#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

/*
    add code for struct here.
*/

struct Student
{
    int age, standard;
    string first_name, last_name;    
};

int main() {
	fast;

    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
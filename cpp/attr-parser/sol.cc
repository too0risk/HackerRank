#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(void)
{
    fast;
    int n, q,i;
    cin>>n>>q;
    string temp;
    vector<string> html;
    vector<string> query;
    cin.ignore();

    for(i=0;i<n;i++)
    {
        getline(cin,temp);
        html.push_back(temp);
    }
    for(i=0;i<q;i++)
    {
        getline(cin,temp);
        query.push_back(temp);
    }

    map<string, string> m;
    vector<string> tag;

    for(i=0;i<n;i++)
    {
        temp=html[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"' ),temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>' ),temp.end());

        if(temp.substr(0,2)=="</")
        {
            tag.pop_back();
        }
        else
        {
            stringstream ss;
            ss.str("");
            ss<<temp;
            string t1,p1,v1;
            char ch;
            ss>>ch>>t1>>p1>>ch>>v1;
            string temp1="";
            if(tag.size()>0)
            {
                temp1=*tag.rbegin();
                temp1=temp1+"."+t1;
            }
            else
            {
                temp1=t1;
            }
            tag.push_back(temp1);
            m[*tag.rbegin()+"~"+p1]=v1;
            while(ss)
            {
                ss>>p1>>ch>>v1;
                m[*tag.rbegin()+"~"+p1]=v1;
            }
        }

    }

    for(i=0;i<q;i++)
    {
        if (m.find(query[i]) == m.end())
            cout << "Not Found!\n";
        else
            cout<<m[query[i]]<<endl;
    }
    return 0;
}
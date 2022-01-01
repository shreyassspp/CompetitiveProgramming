#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    map<char,int> table;

    int count = 0;

    for(int i = 0;i<s.length();i++)
    {
        table[s[i]]++;
    }

    for(auto it = table.begin();it!=table.end();it++)
    {
        if(it->second%2!=0)
        {
            count++;
        }
    }

    if(count%2||count==0)
    cout<<"First"<<"\n";
    else
    cout<<"Second"<<"\n"; //gevqgtaorjixsxnbcoybr


    return 0;
}
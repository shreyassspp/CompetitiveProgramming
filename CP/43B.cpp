#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1,s2;

    getline(cin,s1);
    getline(cin,s2);

    unordered_map <char,int> table;

    for(int i = 0;i<s1.length();i++)
    {
        if(s1[i]!=' ')
        table[s1[i]]+=1;
    }

    bool b =1;

    for(auto ch: s2)
    {
        
        if(ch!=' ')
        {
            if(table.find(ch)==table.end()||table[ch]==0)
            {
                b=0;
                break;
            }

            else
            table[ch]-=1;
        }
    }

    if(b)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";


    
    return 0;
}
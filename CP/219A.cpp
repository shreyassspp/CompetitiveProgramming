#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k;string s;

    cin>>k;
    cin>>s;

    map<char,int> table;

    for(int i =0;i<s.length();i++)
    {
        table[s[i]]+=1;
    }

    map<char,int>::iterator it;

    string ans = "";

    for(it = table.begin();it!=table.end();it++)
    {

        if(it->second%k!=0)
        {
            ans = "-1";
            break;
        }

        ans+=string((it->second/k),(it->first));
    }

    if(ans=="-1")
    cout<<ans<<"\n";
    else
    {
        string result ="";
        for(int i =1;i<=k;i++)
        result+=ans;

        cout<<result<<"\n";
    }

    return 0;
}
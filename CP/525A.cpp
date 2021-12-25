#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n ;
    cin>>n;
    string s; //Has a lenght of 2n-2 with odd position storing key data.

    cin>>s;

    int ans =0;

    map<char,vector<int>> stock;

    for(int i =0;i<s.length();i+=2)
    {
        char c = s[i];
        c = char(c-32);
        stock [c].push_back(i);
    }

    for(int i =1;i<s.length();i+=2)
    {
        if(stock.find(s[i])!=stock.end())
        {
            
            if(!stock[s[i]].empty())
        {
            int pos = stock[s[i]][0];
            if(pos>i)
            ans++;
            else
            {
                stock[s[i]].erase(stock[s[i]].begin());
            }
         }
            else
            ans++;
        }
        else
        {
            ans++;
        }
    }

    cout<<ans<<"\n";
    


    return 0;
}
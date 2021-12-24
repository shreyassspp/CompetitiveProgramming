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

    map<char,string> stock;

    for(int i =0;i<s.length();i+=2)
    {
        char c = s[i];
        c = char(c-32);
        stock [c]= stock[c]+to_string(i);
    }

    for(int i =1;i<s.length();i+=2)
    {
        if(stock.find(s[i])!=stock.end())
        {
            string s1 = stock[s[i]];
            if((int(s1[0])-48)>i)
            ans++;
            else
            {
                stock[s[i]] = s1.substr(1,s1.length());
            }
        }
        else
        {
            ans++;
        }
    }

    cout<<ans<<"\n";
    


    return 0;
}
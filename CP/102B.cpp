#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string solve(string);


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    cin>>s;
    int ans =0;

    while(s.size()!=1)
    {

        s = solve(s);
        ans+=1;
    }

    cout<<ans<<"\n";


    return 0;
}

string solve(string x)
{
    int sum =0;
    for(int i =0;i<x.length();i++)
    {
        char c = x[i];
        sum+= c-48;
    }
    return to_string(sum);
}


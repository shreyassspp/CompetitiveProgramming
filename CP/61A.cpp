#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b;
    cin>>a>>b;

    string ans ="";

    for(int i =0;i<a.length();i++)
    {
        if(a[i]!=b[i])
        ans+="1";
        else
        ans+="0";
    }

    cout<<ans<<"\n";

    return 0;
}
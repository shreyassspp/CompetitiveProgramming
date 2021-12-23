#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    ll a, b;

    while(t--)
    {
        cin>>a>>b;
        if(b==1)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            cout<<a<<" "<<a*b<<" "<<a*(b+1)<<"\n";
        }
        
    }

    return 0;
}
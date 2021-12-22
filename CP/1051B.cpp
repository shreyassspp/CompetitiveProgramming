#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll r,l;

    cin>>l>>r;

    int n = (r-l+1)/2;

    ll a1 = l;
    ll b1 = l+1;

    cout<<"YES"<<"\n";

    while (n--)
    {
        /* code */
        cout<<a1<<" "<<b1<<"\n";
        a1+=2;
        b1+=2;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll k,y,n;

    cin>>y>>k>>n;

    ll first = k-y%k;



    if(!(first+y>n))
    {
        for (ll i = first;i<=(n-y);i+=k)
        cout<<i<<" ";
    }
    else
    cout<<-1<<"\n";

    return 0;
}

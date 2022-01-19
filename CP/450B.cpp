#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7 ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll x,y;
    cin>>x>>y;

    ll n;
    cin>>n;

    int k = n%6;

    if(k==0)
    {
        cout<<(x-y+3*mod)%mod<<"\n";
    }
    else if(k==1)
    {
        cout<<(x+mod)%mod<<"\n";
    }

    else if(k==2)
    {
        cout<<(y+mod)%mod<<"\n";
    }

    else if(k==3)
    {
        cout<<(y-x+3*mod)%mod<<"\n";
    }

    else if(k==4)
    {
        cout<<(-x+mod)%mod<<"\n";
    }

    else
    {
        cout<<(-y+mod)%mod<<"\n";
    }

    return 0;
}

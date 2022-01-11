#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const ll mod = 1073741824;
const ll size1 = 1e6+10;

vector<ll> n_divisors;


void precompute(int n)
{

    ll cnt = 1;
    ll curr =0;
    for(int i =2;i*i<=n;i++)
    {
        if(n%i==0)
     {
        while (n%i==0)
        {
            curr++;
            n/=i;
        }
        cnt*=(curr+1);
        curr =0;
     }
    }

    if(n>1)
    cnt*=2;

    n_divisors.push_back(cnt);

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c;
    cin>>a>>b>>c;

    for(ll i = 1;i<=size1;i++)
    precompute(i);

    ll ans =0;

    for(int i =1;i<=a;i++)
    {
        for(int j =1;j<=b;j++)
        {
            for(int k =1;k<=c;k++)
            {
                ans=(ans + n_divisors[i*j*k-1])%mod;
            }
        }
    }

    cout<<ans;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    ll k,x;

    cin>>n>>k>>x;

    vector<ll> arr(n);

    for(int i =0;i<n;i++)
    cin>>arr[i];

    sort(arr.begin(),arr.end());


    multiset<ll> diff;

    for(int i =0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]>x)
        {
            diff.insert(arr[i+1]-arr[i]);
        }
    }

    ll ans = diff.size();

    for(auto v : diff)
    {
        if((v-1)/x>k)
        break;
        else
        {
            k-=((v-1)/x);
            ans--;
        }
    }

    cout<<1+ans<<"\n";

    return 0;
}

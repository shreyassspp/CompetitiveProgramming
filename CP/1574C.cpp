#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll binary_search(ll [],long long int,int );
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n ; cin>>n;
    ll heroes[n];
    ll sum =0;

    for(int i =0;i<n;i++)
    {
    cin>>heroes[i];
    sum+=heroes[i];
    }

    sort(heroes,heroes+n);

    int m ; cin>>m;
    long long int x;
    ll y;
    while(m--)
    {
        cin>>x>>y;
        ll strength = binary_search(heroes,x,n);
        ll ans = 0;

        if(strength<x)
        ans += x- strength;

        if((y-(sum-strength))>0)
        ans+= y+strength-sum;

        cout<<ans<<"\n";


    }
    return 0;
}

ll binary_search(ll heroes[],long long int x,int n)
{
    int lb = 0, ub = n-1;

    ll ans = heroes[n-1];

    while (ub-lb>0)
    {
        int mid = (ub+lb)/2;

        if(heroes[mid]>=x)
        {
            ans = heroes[mid];
            ub = mid;
        }
        else
        {
            lb = mid +1;
        }

    }

    if(abs(heroes[lb]-x)<abs(ans -x))
    return heroes[lb];

    return ans;
    
    
}
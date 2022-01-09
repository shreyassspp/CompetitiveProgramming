#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    vector<ll> cost;
    vector<ll> cost1 ;
    vector<ll> ans1 ;
    ll sum = 0;

    for(int i =0;i<n;i++)
    {
        ll x;
        cin>>x;
        sum+=x;
        ans1.push_back(sum);
        cost.push_back(x);
        cost1.push_back(x);
    }

    sort(cost1.begin(),cost1.end());

    vector<ll> ans2;
    sum =0;
    for(int i = 0;i<n;i++)
    {
        sum+=cost1[i];
        ans2.push_back(sum);
    }

    int m;
    cin>>m;

    while(m--)
    {
        int type,l,r;
        cin>>type>>l>>r;

        l-=1;
        r-=1;

        if(type==1)
        cout<<ans1[r]-ans1[l]+cost[l]<<"\n";
        else
        cout<<ans2[r]-ans2[l] + cost1[l]<<"\n";
    }

    

    return 0;
}

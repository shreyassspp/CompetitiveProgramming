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

    vector<ll> ans(n,0);

    for(int i =0;i<ans.size();i++)
    {
        cin>>ans[i];
    }

    sort(ans.begin(),ans.end());

    ll count =0;

    for(int i = 0;i<ans.size();i++)
    {
        count += abs(i+1-ans[i]);
    }

    cout<<count<<"\n";

    return 0;
}

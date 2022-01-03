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
    int n;

    ll l,r,c;

    while (t--)
    {
        
        cin>>n;
        vector<ll> ans;

        cin>>l>>r>>c;

        ll l_min = l;
        ll r_max = r;
        ll c_min = c;

        ll previous_ans = c;
        ll lmin_cost = c;
        ll rmax_cost =c;

        ans.push_back(previous_ans);

        for(int i = 1;i<n;i++)
        {
            cin>>l>>r>>c;

            if(r>=r_max)
            {
                r_max = r;
                if(l > l_min)
                {
                    previous_ans = lmin_cost+c;
                    rmax_cost = previous_ans;
                    ans.push_back(previous_ans);
                }
                else
                {
                    l_min = l;
                    previous_ans = c;
                    rmax_cost = previous_ans;
                    lmin_cost = previous_ans;
                    ans.push_back(previous_ans);
                }
            }

            else
            {
                if(l>l_min)
                {
                    previous_ans = rmax_cost;
                    ans.push_back(previous_ans);
                }
                else if(l<l_min)
                {
                    l_min = l;
                    lmin_cost = c;
                    previous_ans = c + rmax_cost;
                    ans.push_back(previous_ans);
                }
                else
                {
                    ans.push_back(pre)
                }
            }
        }
    

        for(ll ans_k : ans)
        cout<<ans_k<<"\n";

    }
    
    
    return 0;
}
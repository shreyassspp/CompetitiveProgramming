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


        ll cost =0; //Stores cost of l_min .
        vector<ll> ans;

        cin>>l>>r>>c;

        ll l_min = l;
        ll r_max = r;
        ll c_min = c;

        ans.push_back(c);

        cost = c;

        ll last_ans = c;



        for (size_t i = 1; i < n; i++)
        {
            cin>>l>>r>>c;
            
            if(r>r_max)
            {
                if(l>l_min)
                {
                    ans.push_back(c+cost);
                    r_max = r;
                    last_ans = c+cost;
                }
                else
                {
                    ans.push_back(c);
                    r_max = r;
                    l_min = l;
                    last_ans = c;
                    cost = min(cost,c);
                }
            }

            else if (r==r_max )
            {
                
                if(l<=l_min)
                {
                    last_ans = min(c,cost);
                    ans.push_back(last_ans);
                    l_min = l;
                    cost = last_ans;
                }
                else
                {
                    last_ans = min(last_ans,c+cost);
                    ans.push_back(last_ans);
                }
            }

            else if(l<l_min)
            {
                ans.push_back(last_ans+c);
                last_ans+=c;
                l_min = l;
                cost = c;
            }
            
            else
            {
                ans.push_back(last_ans);
            }

            //Update value of cost.
        }

        for (ll price :ans)
        {
            cout<<price<<"\n";
        }
        
        
    }
    
    
    return 0;
}
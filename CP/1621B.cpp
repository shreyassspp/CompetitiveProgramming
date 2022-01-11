#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t ;
    cin>>t;

    while (t--)
    {
        int n ;
        cin>>n;
        ll min_index = LLONG_MAX;
        ll max_index = -1;
        ll min_index_cost;
        ll max_index_cost;

        ll current_cost ;
        vector<ll> ans;

        for(int i = 0;i<n;i++)
        {
            ll l,r,c;
            cin>>l>>r>>c;

            if(l<min_index)
            {
                if(r>max_index)
                {
                    current_cost = c;
                    max_index = r;
                    min_index = l;
                    max_index_cost = c;
                    min_index_cost = c;
                    ans.push_back(current_cost);
                }

                else if(r==max_index)
                {
                    current_cost = c;
                    min_index = l;
                    max_index_cost = min(c,max_index_cost);
                    min_index_cost = c;
                    ans.push_back(current_cost);
                }

                else
                {
                    current_cost = c+max_index_cost;
                    min_index = l;
                    min_index_cost = c;
                    ans.push_back(current_cost);
                }
            }

            else if(l == min_index)
            {
                if(r>max_index)
                {
                    current_cost = c;
                    max_index = r;
                    max_index_cost = c;
                    min_index_cost = min(min_index_cost,c);
                    ans.push_back(current_cost);
                }

                else if(r==max_index)
                {
                    current_cost = min(current_cost,c);
                    min_index_cost = min(min_index_cost,c);
                    max_index_cost = min(c,max_index_cost);
                    ans.push_back(current_cost);
                }

                else
                {
                    min_index_cost = min(min_index_cost,c);
                    current_cost = min(current_cost,min_index_cost+max_index_cost);
                    ans.push_back(current_cost);
                }
            }

            else
            {
                if(r>max_index)
                {
                    max_index_cost = c;
                    current_cost = max_index_cost+min_index_cost;
                    max_index = r;
                    ans.push_back(current_cost);
                }

                else if(r==max_index)
                {
                    max_index_cost = min(c,max_index_cost);
                    current_cost = min(current_cost,max_index_cost+min_index_cost);
                    ans.push_back(current_cost);
                }

                else
                {
                    ans.push_back(current_cost);
                }
            }
        }

        for(ll cost : ans)
        cout<<cost<<"\n";
    }
    

    return 0;
}

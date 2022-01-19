#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;unsigned long long int k;
    cin>>n>>k;

    map<char,ll> freq;

    for(int i =0;i<n;i++)
    {
        char x;
        cin>>x;
        freq[x]+=1;
    }

    vector<ll> table;

    for (auto p: freq)
    {
        /* code */
        table.push_back(-p.second);
    }

    sort(table.begin(),table.end());

    

    unsigned long long int ans = 0;

    for(auto p : table)
    {

        unsigned long long int x = -p;

        if(k>=x)
        {
            k-=x;
            ans+=x*x;
        }
        else
        {
            ans+=k*k;
            break;
        }
    }

    cout<<ans<<"\n";
    return 0;
}

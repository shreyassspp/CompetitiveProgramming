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
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> freq;
        for(int i =0;i<n;i++)
        {
            int x;
            cin>>x;
            freq[abs(x)]+=1;
        }

        int ans = freq.size();

        for(auto pair_p : freq)
        {
            if(pair_p.second>1 && pair_p.first!=0)
            ans+=1;
        }

        cout<<ans<<"\n";
    }
    
    return 0;
}
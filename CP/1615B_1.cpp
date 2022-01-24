#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int arr_size = 2e5+10;


ll prefix [arr_size][20];

void precompute()
{

    for(ll i =1;i<arr_size;i++)
    {

        for (int j = 0; j <20; j++)
        {
            if(i&(1<<j))
            {
                prefix[i][j] = 1;
            }
            prefix[i][j]+=prefix[i-1][j];
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    precompute();

    int t;
    cin>>t;

    while (t--)
    {
        ll l,r;
        cin>>l>>r;

        ll ans = 1e10;
        ll total = r-l+1;

        for (int i = 0; i <20; i++)
        {
           ll curr = prefix[r][i]-prefix[l-1][i];
           ans = min(ans,total-curr);
        }

        cout<<ans<<"\n";
        
    }
    

    return 0;
}

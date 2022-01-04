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

    ll l,r;
    ll l_min = LONG_LONG_MAX,r_max = LONG_LONG_MIN;

    int ans =-1;

    for(int i =1;i<=n;i++)
    {
        cin>>l>>r;

        if(l<=l_min && r>=r_max)
        {
            ans = i;
            l_min = l;
            r_max = r;
        }

        else if(l<l_min)
        {
            ans = -1;
            l_min = l;
        }

        else if(r>r_max)
        {
            ans = -1;
            r_max = r;
        }

    }

    cout<<ans<<"\n";
    
    return 0;
}
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
        ll max1 = 0;
        ll min1 = 1e9+10;

        for(int i =0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x>max1)
            max1 = x;
            if(x<min1)
            min1 = x;

        }

        cout<<max1-min1<<"\n";
    }

    return 0;
}

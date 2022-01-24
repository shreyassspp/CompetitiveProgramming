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

    while (t--)
    {
        int n;
        cin>>n;
        
        vector<ll> arr(n+1);
        

        for(int i =1;i<=n;i++)
        cin>>arr[i];

        int ans = 0;

        for(ll i = 1;i<=n;i++)
        {
            for(ll j =arr[i]-i;j<=n;j+=arr[i])
            {
                   if(j>=1) 
                        if(arr[i]*arr[j]==(i+j)&&i<j)
                            ans++;
            }
        }

        cout<<ans<<"\n";
    }
    

    return 0;
}

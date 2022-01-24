#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isValid(ll ind, vector<int> &time,ll health);


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
        ll h;
        
        cin>>n>>h;
        

        vector<int> time(n);

        for(int i =0;i<n;i++)
        cin>>time[i];

        ll low = 1;
        ll high = h;

        ll ans = high;

        while (high-low>1)
        {
            ll mid = (high+low)/2;

            if(isValid(mid,time,h))
            {
             ans = mid;
             high = mid;
            }
            else
            low = mid+1;
        }


        if(isValid(low,time,h))
        ans = low;

        cout<<ans<<"\n";
        
    }
    

    return 0;
}

bool isValid(ll k,vector<int> &time,ll health)
{

    for(int i = 0;i<time.size()-1;i++)
    {
        if(time[i+1]-time[i]>k)
        health-=k;
        else
        health-=time[i+1]-time[i];
    }

    if(health<=k)
    return true;

    return false;
}

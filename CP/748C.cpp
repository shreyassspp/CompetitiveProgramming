#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int max_mice(ll a[],ll&,int&);
bool isValid(ll a[],int&, ll&,int&);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //Need to define helper function to check if it is a valid value or not.
    int t;
    cin>>t;
    ll n; int k;
    while(t--)
    {
        cin>>n>>k;
        ll a[k];
        for(int i=0;i<k;i++)
        cin>>a[i];
        sort(a,a+k);
        int ans = max_mice(a,n,k);
        cout<<ans<<"\n";
    }
    return 0;
}

int max_mice(ll a[],ll &n,int &k)
{
    int ans=0;
    int lb =0; int ub =k;

    while((ub-lb)>1)
    {
        int mid = (ub+lb)/2;
        if(isValid(a,mid,n,k))
        {
            ans = mid;
            lb = mid;
        }
        else
        ub = mid-1;
    }

    if(isValid(a,ub,n,k))
    return ub;

    return ans;
}

bool isValid(ll a[],int &mid, ll &n,int &k)
{
    ll sum =0;
    for(int i =1;i<=mid;i++)
    {
        sum +=a[k-i];
    }
    return ((n*(mid-1))<sum);
}
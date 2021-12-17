#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;

    ll arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[0]<<"\n";

    for(int i=1;i<k;i++)
    {
        if(i<n)
        {
            if(arr[i]-arr[i-1])
            {
                cout<<arr[i]-arr[i-1]<<"\n";
            }
            else
            {
                k+=1;
            }
        }
        else
        {
            cout<<0<<"\n";
        }
    }
    return 0;
}
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

    int arr[n];
    int sum[n];

    cin>>arr[0];
    sum[0] = arr[0];

    for(int i =1;i<n;i++){
    cin>>arr[i];
    sum[i]= sum[i-1]+arr[i];
    }

    ll sum_min = sum[k-1];
    int ans = 1;

    for(int i = k;i<n;i++)
    {
        if((sum[i]-sum[i-k])<sum_min)
        {
            sum_min = sum[i]-sum[i-k];
            ans = i-k+2;
        }
    }

    cout<<(ans)<<"\n";


    
    return 0;
}
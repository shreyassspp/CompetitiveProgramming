#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define f(i,a,b) for(int i = a; i<b;i++)

int count_arr[1000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int arr[n+1];

    

    f(i,1,n+1)
    {
    cin>>arr[i];
    if(arr[i]==1) count_arr[i] = 1;

    count_arr[i]+=count_arr[i-1];
    }

    int ans = 0;
    int max_var = INT32_MIN;

    f(i,1,n+1)
    {

            int var = 2*count_arr[i-1]-i;
            max_var = max(max_var,var);
            
            int count1 = max_var + count_arr[n]-2*count_arr[i]+i+1;
            ans = max(ans,count1);
    }

    if(n==1)
    {
        if(arr[1]==0)
        ans =1;
    }

    cout<<ans<<"\n";


    

    return 0;
}

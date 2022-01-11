#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans(int n,int,int,int);

unordered_map<int,int> ans1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,n;
    cin>>n>>a>>b>>c;

    cout<<ans(n,a,b,c)<<"\n";

    return 0;
}

ll ans(int n,int a,int b,int c)
{
    if(n<0)
    return INT16_MIN;

    if(n==0)
    return 0;

    if(ans1.count(n))
    return ans1[n];
    
    return ans1[n]=1 + (max(ans(n-a,a,b,c),max(ans(n-b,a,b,c),ans(n-c,a,b,c))));
}

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
        int n,m,rb,cb,rd,cd;

        cin>>n>>m>>rb>>cb>>rd>>cd;

        int x_diff = cd-cb;
        int y_diff = rd-rb;
        int ans;

        if(x_diff>=0 && y_diff >=0)
        {
            ans = min(x_diff,y_diff);
        }
        else if(x_diff>=0 & y_diff<0)
        {
            ans = x_diff;
            ans = min(ans,2*(n-rb)+(rb-rd));
        }

        else if(y_diff>=0 & x_diff<0)
        {
            ans = y_diff;
            ans = min(ans,2*(m-cb)+(cb-cd));
        }
        else
        {
            ans = 2*(n-rb)+(rb-rd);
            ans = min (ans,2*(m-cb)+(cb-cd));
        }

        cout<<ans<<"\n";
    }
    
    
    return 0;
}
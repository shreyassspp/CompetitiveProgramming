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
        ll x,y,z;

        cin>>x>>y>>z;

        ll max1,min1;
        max1 = max(x,y);
        max1 = max(max1,z);

        min1 = min(x,y);
        min1 = min(min1,z);

        y = x+y+z-(max1+min1); 

        if(min1==y)
        {
            if(max1%2==0)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else if(max1==y)
        {
            if(min1%2==0)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else
        {
            if(max1==min1+y)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        
    }
    
    return 0;
}

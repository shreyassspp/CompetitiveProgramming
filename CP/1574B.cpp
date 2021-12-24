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
    int a,b,c,m;
    while(t--)
    {
        cin>>a>>b>>c>>m;

        if(a+b+c-3>=m)
        {
            int x1 = max(a,b);
            x1 = max(x1,c);
            x1 = 2*x1 -(a+b+c);
            x1-=1;

            if(x1>m)
            cout<<"NO"<<"\n";
            else
            cout<<"YES"<<"\n";

        }
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}
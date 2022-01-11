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

    while(t--)
    {
        ll a,b,c;

        cin>>a>>b>>c;

        b*=2;

        bool f =0;

        if((a+c)%(b)==0)
        f=1;

        if((b-c)%a==0)
        {
            if((b-c)>0)
            f=1;
        }

        if((b-a)%c==0)
        {
            if((b-a)>0)
            f=1;
        }

        if(f)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";

    }

    return 0;
}

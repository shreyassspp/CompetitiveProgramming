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
        int n ;
        cin>>n;

        set <int> ans;

        for(int i =0;i<n;i++)
        {
            ll x;
            cin>>x;
            while (x>n)
            {
                x/=2;
            }
            
            while(x>1)
            {
                if(ans.find(x)!=ans.end())
                x/=2;
                else
                break;
            }

            ans.insert(x);
        }

        if(ans.size()!=n)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";

    }
    

    return 0;
}

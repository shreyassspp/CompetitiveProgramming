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
        string s;
        cin>>s;

        int k =0;
        for(auto i : s)
        {
                if(i=='N')
                k++;
                if(k==2)
                break;
        }

        if(k==1)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
        
    }

    return 0;
}

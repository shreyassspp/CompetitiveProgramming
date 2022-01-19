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
        int n; char c;
        cin>>n>>c;

        string s;
        cin>>s;

        if(count(s.begin(),s.end(),c)==n)
        cout<<"0"<<"\n";
        else
        {
            int i = n-1;

            while(i>=0)
            {
                if(s[i]==c)
                break;
                i--;
            }

            if(i>=n/2)
            {
                cout<<1<<"\n";
                cout<<i+1<<"\n";
            }

            else
            {
                cout<<2<<"\n";
                cout<<n<<" "<<n-1<<"\n";
            }

        }
    }

    return 0;
}

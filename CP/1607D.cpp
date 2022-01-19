#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check_red(vector<ll> &r);
bool check_blue(vector<ll> &b);
int n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while (t--)
    {
        
        cin>>n;
        vector<ll> a(n);
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }

        vector<ll> r;
        vector<ll> b;

        for(int i =0;i<n;i++)
        {
            char c;
            cin>>c;
            if(c=='R')
            r.push_back(a[i]);
            else
            b.push_back(a[i]);
        }

        sort(r.begin(),r.end());
        sort(b.begin(),b.end());

        cout<<((check_red(r)&&check_blue(b))?"YES":"NO")<<"\n";

    }

    
    return 0;
}

bool check_red(vector<ll> &r)
{
    int i = r.size()-1;
    int j =0;

    while (i>=0)
    {
        if(r[i]+j>n)
        return false;
        i--;
        j++;
    }
    return true;
}

bool check_blue(vector<ll> &b)
{
    int i =0;

    while (i<b.size())
    {
        if(b[i]-i<1)
        return false;
        i++;
    }
    return true;
}



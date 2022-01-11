#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int len = 1e6;
int prime[len];
unordered_set<ll> squares;

void precompute()
{
    for(ll i =2;i<len;i++)
    {
        if(prime[i]==0)
        {
            int j =2;
            squares.insert(i*i);
            while (i*j<len)
            {
                prime[i*j]=1;
                j++;
            }
        }
    }


}




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    precompute();

    int n;
    cin>>n;

    for(int i =0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(squares.find(x)!=squares.end())
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }

    return 0;
}

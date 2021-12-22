#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int common [1005];
set<ll> squares;

void store_common();
void store_squares();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin>>t;
    ll n;
    
    store_squares();
    store_common();


    while(t--)
    {
        cin>>n;
        int a = int(sqrt(n));
        int b =int(cbrt(n));
        int c = common[b];

        int ans =  a+ b -(c) ;
        cout<<ans<<"\n";
    }
    return 0;
}

void store_squares()
{
    for(int i=1;i<35000;i++)
    {
        squares.insert(i*i);
    }
}

void store_common()
{
    int count =0;

    for(int i =1; i<1005;i++)
    {
        if(squares.find(i*i*i)!=squares.end())
        {
            count+=1;
        }
        common[i] = count;
    }
}


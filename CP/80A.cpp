#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(int x);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;
    bool f =1;

    for(int i = n+1;i<m;i++)
    {
        if(isPrime(i))
        {
            f=0;break;
        }

    }

    if(f && isPrime(m))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";

    return 0;
}

bool isPrime(int x)
{
    for(int i =2;i*i<=x;i++)
    {
        if(x%i==0)
        return false;
    }

    return true;
}
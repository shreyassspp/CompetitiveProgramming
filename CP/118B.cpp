#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n ;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cout<<" ";
        for(int j = i;j<n;j++)
        cout<<" ";

        if(!i)
        cout<<" ";

        for (int  j = 0;j<=i; j++)
        {
            cout<<j<<" ";
        }

        for(int j = i-1;j>=0;j--)
        cout<<j<<" ";


        cout<<"\n";

    }

    for(int i = 0;i<=n;i++)
    cout<<i<<" ";
    for(int i = n-1;i>=0;i--)
    cout<<i<<" ";

    cout<<"\n";


    for(int i = 0;i<n;i++)
    {
        cout<<" ";
        for(int j = 0;j<=i;j++)
        cout<<" ";

        if(n-i==1)
        cout<<" ";

        for (int  j = 0;j<(n-i); j++)
        {
            cout<<j<<" ";
        }

        for(int j = n-i-2;j>=0;j--)
        cout<<j<<" ";


        cout<<"\n";

    }


    return 0;
}
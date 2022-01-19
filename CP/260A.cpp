#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,n;

    cin>>a>>b>>n;

    bool f = 0;

    for(int i =0;i<=9;i++)
    {
        if((a*10+i)%b==0)
        {
            f = 1;
            a = a*10+i;
            break;
        }
    }

    if(!f)
    cout<<-1<<"\n";
    else
    {
        cout<<a;
        for(int i =0;i<n-1;i++)
        cout<<0;
    }

    return 0;
}

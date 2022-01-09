#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int x1 =0,y1=0;
    bool b =0;

    for (size_t i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;

        if(x%2==1)
        x1++;
        if(y%2==1)
        y1++;

        if((x+y)%2==1)
        b=1;
        
    }

    if(x1%2==0 && y1%2==0)
    cout<<0<<"\n";
    else if(x1%2==1 && y1%2==1)
    {
        if(b)
        cout<<1<<"\n";
        else
        cout<<-1<<"\n";
    }
    else
    cout<<-1<<"\n";
    
    return 0;
}

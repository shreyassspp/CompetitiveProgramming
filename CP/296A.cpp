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
    map<int,int> table;

    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        table[x]+=1;
    }

    int f =0;
    for(auto p : table)
    {
            if(f<p.second)
            f = p.second;
    }
    if(f<=(n+1)/2)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    
    return 0;
}
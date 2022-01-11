#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,d;
    cin>>n>>m>>d;

    vector<int> list;

    for(int i =0;i<n*m;i++)
    {
        int x;
        cin>>x;
        list.push_back(x);
    }

    sort(list.begin(),list.end());

    int mid = list[list.size()/2];

    bool b =1;
    int ans =0;

    for (int x: list)
    {
        if(abs(mid-x)%d!=0)
        {
            b=0;
            break;
        }
        else
        {
            ans+= abs(mid-x)/d;
        }
    }

    if(b)
    cout<<ans<<"\n";
    else
    cout<<"-1"<<"\n";
    

    return 0;
}

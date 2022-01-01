#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    int s,n;

    cin>>s>>n;

    vector<pair<int,int>> pairs;

    int x,y;

    for(int i =0;i<n;i++)
    {
        cin>>x>>y;
        pairs.push_back(make_pair(x,y));
    }

    sort(pairs.begin(),pairs.end());

    vector<pair<int,int>>::iterator it;

    bool b =1;

    for(it = pairs.begin();it!=pairs.end();it++)
    {
        if(s>it->first)
        s+=it->second;
        else
        {
            b=0;break;
        }
    }

    if(b)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    
    return 0;
}
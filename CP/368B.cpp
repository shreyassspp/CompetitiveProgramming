#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;

    vector<int> list;
    unordered_set<int> ans;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        list.push_back(x);
    }

    int display[n];

    for(int i  = n-1;i>=0;i--)
    {
        ans.insert(list[i]);
        display[i] = ans.size();
    }

    for(int i =0;i<m;i++)
    {
        int x;
        cin>>x;

        cout<<display[x-1]<<"\n";
    }

    return 0;
}

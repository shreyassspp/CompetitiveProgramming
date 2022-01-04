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

    set<int> cor_sol ;
    set<int> wrong_sol ;

    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        cor_sol.insert(x);
    }

    for(int i =0;i<m;i++)
    {
        int x;
        cin>>x;
        wrong_sol.insert(x);
    }

    auto it = --cor_sol.end();
    auto it1 = wrong_sol.begin();

    int time = *(it1)-*(it);

    if(time>0)
    {
        time = *(it1)-1;

        it1 = cor_sol.begin();

        if(*(it) >=2*(*it1))
        cout<<(*it)<<"\n";
        else if(time >= 2*((*it1)))
        cout<<2*(*it1)<<"\n";
        else
        cout<<"-1"<<"\n";

    }
    else
        cout<<"-1"<<"\n";
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;

        map<int,int> table;

        for(int i =0;i<n;i++)
        {
            int x;
            cin>>x;
            table[x%m]+=1;
        }

        int ans =0;

        for (auto p : table)
        {
            if(p.first==(m/2)&& m%2==0)
            {
                ans+=1;
            }
            else if(p.first==0)
            ans+=1;
            else
            {
                if(table.find(m-p.first)!=table.end())
                {
                    int f1 = p.second;
                    int f2 = table[m-p.first];

                    if(f1==-1)
                    continue;
                    
                    if(abs(f1-f2)>=2)
                    {
                        ans+=abs(f1-f2);
                    }
                    else
                    {
                        ans+=1;
                    }

                    table[m-p.first] = -1;
                }

                else
                ans+=p.second;
            }
        }

        if(m==1)
        ans=1;
        
        cout<<ans<<"\n";
    }
    

    return 0;
}

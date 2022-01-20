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
        int n,u,v;
        cin>>n>>u>>v;

        vector<int> obs(n);

        bool f =1;
        bool a =1;

        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>obs[i];
            if(i!=0)
            {
                if(obs[i]!=obs[i-1])
                f=0;

                if(abs(obs[i]-obs[i-1])>1)
                a=0;
            }
        }

        if(f)
        cout<<u+v<<"\n";
        else if(a)
        cout<<0<<"\n";
        else
        cout<<min(u,v)<<"\n";



        
    }
    

    return 0;
}

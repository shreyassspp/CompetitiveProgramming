#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define f(i,a,b) for(int i = a; i<b;i++)

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

        int l,sl;
        bool b1 = 1; // If this is one answer is v+min(u,v).
        bool b2 =0; //If this is one answer is zero.
        vector<int> arr(n);

        f(i,0,n)
        {
            cin>>arr[i];
            if(i)
            {
                if(arr[i]!=arr[i-1])
                b1=0;

                if(abs(arr[i]-arr[i-1])>1)
                b2=1;
            }
        }

        if(b2)
        cout<<0<<"\n";
        else if(b1)
        cout<<v+min(u,v)<<"\n";
        else
        cout<<min(u,v)<<"\n";

    
    }
    

    return 0;
}

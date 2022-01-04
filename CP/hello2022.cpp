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
        int n,k;
        cin>>n>>k;

        if(k<=(n+1)/2)
        {
            int a = 0;
            for(int i =0;i<n;i++)
            {
                
                if(i%2==0)
                {
                for(int j =0;j<n;j++)
                {
                    if(a==j&&k>=1)
                    {
                        cout<<"R";
                        k--;
                    }
                    else
                    cout<<".";
                }
                 a+=2;
                cout<<"\n";
            }
            else
            {
                for(int j =0;j<n;j++)
                {
                    cout<<".";
                }
                cout<<"\n";
            }
        }
        }
        else
        cout<<"-1"<<"\n";
    }
    
    
    return 0;
}
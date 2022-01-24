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
        int n;
        cin>>n;
        vector<int> a(n);


        for(int i=0;i<n;i++)
        cin>>a[i];

        //Not compulsory that ans will be integer. It can also be fractional.

        int ans = INT16_MAX;

        if(n==1||n==2)
        {
            cout<<"0"<<"\n";
            continue;
        }

        else
        {

            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    int count =0;

                    for (int k = 0; k < n; k++)
                    {
                         if((a[k]-a[i])*(k-j)!=(a[k]-a[j])*(k-i))count++;
                    }

                    ans = min(ans,count);
                    
                }
                
            }

            cout<<ans<<"\n";
            

        }

        
    }
    

    return 0;
}

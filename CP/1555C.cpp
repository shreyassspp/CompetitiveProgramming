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
        int m;
        cin>>m;

        vector<int> r1(m);
        vector<int> r2(m);

        vector<ll> ans1(m);
        vector<ll> ans2(m);

        ll sum =0;

         

        for (int i = 0; i < m; i++)
        {
            cin>>r1[i];
        }

        ans2[0]=(sum);

        for(int i =0;i<m;i++){
            cin>>r2[i];
            sum+=r2[i];

            if(i!=0)
            ans2[i]=sum-r2[i]; // Last element should not be included anyways.

            // If i is chosen to be k then ans2[i] has the sum of bottom row till i-1.
            //for i =0 , ans should be 0.
            //for i = m-1, last element should not be included.
        }

        sum =0;

        ans1[m-1]=sum;

        for(int i = m-2;i>=0;i--)
        {
            sum+=r1[i+1];
            ans1[i]=(sum);
        }


        sum = 1e9;

        for (int i = 0; i < m; i++)
        {
            if(sum>(max(ans1[i],ans2[i])))
            {
                sum =max(ans1[i],ans2[i]);
            }

        }

        cout<<sum<<"\n";
        
        
    }
    

    return 0;
}

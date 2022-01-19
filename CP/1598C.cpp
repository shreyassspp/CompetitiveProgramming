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

        vector<double> v;
        double mean1 =0;

        for(int i =0;i<n;i++)
        {
            double x;
            cin>>x;
            mean1+=x;
            v.push_back(x);
        }

        mean1/=n;
        mean1*=2;

        sort(v.begin(),v.end());

        ll ans =0;

        int i = 0;
        int j = v.size()-1;

        ll count1=0,count2=0;

        while (i<j)
        {
            if(v[i]+v[j]==mean1 && v[i]!=v[j])
            {
                count1=1;
                count2=1;
                while (v[i++]==v[i])
                {
                    count1++;
                }
                while (v[j--]==v[j])
                {
                    count2++;
                }
                // --i;
                // ++j;
                ans+=count1*count2;
            }
            else if(v[i]==v[j] && v[i]*2==mean1)
            {
                ll m = j-i+1;
                ans+=m*(m-1)/2;
                break;
            }

            else if(v[i]+v[j]>mean1)
            j--;
            else
            i++;
        }
        
        cout<<ans<<"\n";
        
    }
    

    return 0;
}

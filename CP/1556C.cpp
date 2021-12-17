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
    int n;
    while(t--)
    {
        cin>>n;
        char a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        for(int i=0;i<n;i++)
        cin>>b[i];

        long long sum =0;
        int i=0;
        while(i<n)
        {
            if(a[i]!=b[i])
            {
                sum+=2;
                ++i;
            }
            else
            {
                if(i+1<n)
                {
                    if(a[i+1]==b[i+1])
                    {
                        if(a[i]==a[i+1])
                        {
                        sum+=49-int(a[i]);
                        i++;
                        }
                        else
                        {
                            sum+=2;
                            i+=2;
                        }
                    }
                    else
                    {
                        sum+=2+49-int(a[i]);
                        i+=2;
                    }
                }
                else
                {
                    sum+=49-int(a[i]);
                    i++;
                }
            }
        }

        cout<<sum<<"\n";

    }
    return 0;
}
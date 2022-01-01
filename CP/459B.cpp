#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long int n ;
    cin>>n;
    ll x;

    long long int count_max =0,count_min =0;
    ll max1 = 0;ll min1 =1e9 +10 ;

    for(int i =0;i<n;i++)
    {
        cin>>x;
        if(x>=max1)
        {
            if(x==max1)
            count_max++;
            else
            {
            max1 = x;
            count_max = 1;
            }
        }

        if(x<=min1)
        {
            if(x==min1)
            count_min++;
            else
            {
            min1 = x;
            count_min = 1;
            }
            
        }

    }

    if(max1!=min1)
    cout<<(max1-min1)<<" "<<count_max*count_min<<"\n";
    else
    {
    long long int ways = (n*(n-1))/2;
    cout<<0<<" "<<ways<<"\n";
    }


    return 0;
}
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
       vector<ll> h(n);

       for (int i = 0; i <n; i++)
       {
           cin>>h[i];
       }

       sort(h.begin(),h.end());

       int k;

       int min_diff = INT32_MAX;

       for (int j = 0; j < n-1; j++)
       {
           if(min_diff>(h[j+1]-h[j]))
           {
               k = j;
               min_diff = h[j+1]-h[j];
           }
       }

       cout<<h[k]<<" ";

       for (int i = k+2; i <n ; i++)
       {
           cout<<h[i]<<" ";
       }

       for (int i = 0; i < k; i++)
       {
           cout<<h[i]<<" ";
       }

       cout<<h[k+1]<<"\n";
       
       
       
       
    }
    

    return 0;
}

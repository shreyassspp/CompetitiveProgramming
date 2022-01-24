#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<long long int> pw;

void precompute()
{
   long long int k =1;
   
    for (ll i = 0; i < 60; i++)
    {
        long long int c = k<<i;
        pw.push_back(c);
    }
    
}

int ans(ll n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    precompute();

    while (t--)
    {
        ll n;
        cin>>n;

        cout<<ans(n)<<"\n";
    }

    // cout<<ans(1052);
    
    return 0;
}

int ans(ll n)
{
   
   int ans1 = 1e9;
   string s = to_string(n);

   for (auto x:pw)
   {
       string s1 = to_string(x);

       int i =0,j=0;
       int res =0;

       while (i<s.length()&&j<s1.length())
       {
           if(s[i]==s1[j])
           j++;
           else
           res++;

           i++;
       }

       if(i==s.length()&&j!=s1.length())
       res+=s1.length()-j;
       else if(j==s1.length()&&i!=s.length())
       res+=s.length()-i;

       ans1 = min(ans1,res);
       
   }

   return ans1;
   
}

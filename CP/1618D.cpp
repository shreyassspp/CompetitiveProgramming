#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(vector<ll> &a1,int k,ll ans);


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

        vector<ll> a(n);

        for(int i =0;i<n;i++)
        cin>>a[i];

        sort(a.begin(),a.end());

        cout<<solve(a,k,0)<<"\n";


    }
    

    return 0;
}


ll solve(vector<ll> &a1,int k,ll ans)
{
  vector<ll> a;
  vector<ll> b;

  for(int i =0;i<k;i++)
  {
      a.push_back(a1[a1.size()-1]);
      a1.erase(--a1.end());
  }

   for(int i =0;i<k;i++)
  {
      b.push_back(a1[a1.size()-1]);
      a1.erase(--a1.end());
  }

  for(auto it : a1)
  ans +=it;

  for(int i =0;i<k;i++)
  {
      ans+=b[i]/a[i];
  }
  return ans;
}

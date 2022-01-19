#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

   vector<int> a;
   vector<int> b;

   for(int i =0;i<n;i++)
   {
       int a1,b1;
       cin>>a1>>b1;
       a.push_back(a1);
       b.push_back(b1);
   }

   int ans =0;
   bool f =0;

   for(int i =0;i<a.size();i++)
   {
      f=0;
       for(int j =0;j<b.size();j++)
       {
           if(i==j)
           continue;
           if(a[i]==b[j])
           {
               f=1;
               break;
           }
       }
       if(!f)
       ans+=1;
   }

   cout<<ans<<"\n";
   
    return 0;
}

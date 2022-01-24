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
   
   while(t--)
   {

       int n;
       cin>>n;
       set<int> st;

       vector<int> rm;
       for(int i =1;i<=n;i++)
       st.insert(i);

       for (int i = 0; i < n; i++)
       {
           int v;
           cin>>v;

           if(st.find(v)!=st.end())st.erase(v);
           else
           rm.push_back(v);
       }

       sort(rm.begin(),rm.end());

       reverse(rm.begin(),rm.end());

       bool f =1;

       for (auto x : rm)
       {
           auto it = --st.end();

           if(x%(x-*it)!=*it)
           {
               f=0;
               break;
           }

           st.erase(*it);
       }

       if(f)
       cout<<rm.size()<<"\n";
       else
       cout<<"-1"<<"\n";
       
   }
    

    return 0;
}

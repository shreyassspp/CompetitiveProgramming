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
     string s;
    while(t--)
    {
       cin>>s;
       if(s.size()%2==0)
       {
           bool flag = true;
           for(int i =0;i<s.size()/2;i++)
           {
               if(s[i]!=s[i+s.size()/2])
               {
                   flag = false;
                   break;
               }
           }
           if(flag)
           cout<<"YES"<<"\n";
           else
           cout<<"NO"<<"\n";
       }
       else
       cout<<"NO"<<"\n";
    }
    return 0;
}
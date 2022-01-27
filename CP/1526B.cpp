#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define f(i,a,b) for(int i = a; i<b;i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   int t;
   cin>>t;

   while (t--)
   {
       ll x;
       cin>>x;

       bool f = 0;

       f(i,0,11)
       {
           
           if((x-111*i)%11==0)
           {
               if(x-111*i>=0){
               f=1;
               break;
               }
           }
       }

       if(f)
       cout<<"YES"<<"\n";
       else
       cout<<"NO"<<"\n";
   }
   
    


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string solve(string x);

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
        string s;
        cin>>s;

        cout<<solve(s)<<"\n";
    }
    
    
    return 0;
}

string solve(string x) 
{

   string k;
   k.push_back(x[0]);

   int cont = 2;

   for(int i =1;i<x.length();i++)
   {
       if(x[i]>x[i-1])
       break;
       else if(x[i]==x[i-1])
       {
         if(i>=2){
         if(x[i]!=x[i-cont])
         {
         k.push_back(x[i]);
         cont++;
         }
         else
         break;
         }
         else
         {
             break;
         }
       }
       else{
       k.push_back(x[i]);
       cont =2;
       }
   }

   string rev = k;
   reverse(rev.begin(),rev.end());

   return k+rev;
}
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

    map<int,int> table;

    bool b =1;

   for (int i = 0; i < n; i++)
   {
       int x;
       cin>>x;

       if(b)
     {
        table[x]+=1;
        
        if(x==50)
        {
            if(table[25]>=1)
            table[25]-=1;
            else
            b=0;
        }

        else if (x==100)
        {
            if(table[50]>=1 && table[25]>=1)
            {
                table[50]-=1; table[25]-=1;
            }

            else if(table[25]>=3)
            {
                table[25]-=3;
            }
            else
            b=0;
        }

      }
   }

   if(b)
   cout<<"YES"<<"\n";
   else
   cout<<"NO"<<"\n";
   
    
    return 0;
}

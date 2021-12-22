#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void remove_zeros(string x)
{

    for(int i =0;i<x.length();i++)
    {
        if(x[i]!='0')
        {
            cout<<x.substr(i,x.length())<<"\n";
            break;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>s; // String a and s are arrays.

        int i =s.size()-1;
        int j = a.size()-1;
        
        int s1 = int(s[i])-48;
        int a1 = int(a[j])-48;
        

        string b = "";
        while(i>=-1)
        {
            if(i==-1 && j==-1)
           {
               remove_zeros(b);
               break;
           }

           else if((i==-1&&j!=-1))
           {
               cout<<"-1"<<"\n";
               break;
           }

           else
           {
              if(j==-1)
              {
                  b = to_string(s1) + b;
                  --i; 
                  s1=int(s[i])-48;
              }

              else if(s1-a1>=10)
              {
                cout<<"-1"<<"\n";
               break;
              }

              else if(s1<a1)
              {
                  s1 = s1 + 10*(int(s[--i])-48);
              }
              else
              {
                  b = to_string(s1-a1) + b;
                  --i,--j;
                  s1=int(s[i])-48,a1=int(a[j]) -48;
              }

           }
        }

    }
    return 0;
}
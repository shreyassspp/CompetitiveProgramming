#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string haystack,needle;
    cin>>haystack>>needle;

     if(!needle.length())
            cout<<0<<"\n";
        else
        {
            int ans = -1;
            int l1 = haystack.length();
            int l2 = needle.length();
            
            for(int i =0;i<l1-l2+1;i++)
            {
                if(haystack[i]==needle[0])
                {
                    int f =1 ;
                    for(int j = 1;j<l2;j++)
                    {
                        if(haystack[j+i]!=needle[j])
                        {
                            f=0;
                            break;
                        }
                    }
                    
                    if(f)
                    {
                        ans = i;
                        break;
                    }
                }
            }
            
             cout<<ans<<"\n";
        }

    return 0;
}
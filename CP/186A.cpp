#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s1,s2;

    cin>>s1>>s2;

    if(s1.length()==s2.length())
    {
        int count = 0; char c1,c2,c3,c4;
        for(int i =0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
                if(count==1)
                {
                    c1=s1[i];
                    c2=s2[i];
                }
                else if(count==2)
                {
                    c3 = s1[i];
                    c4 = s2[i];
                }
            }
        }

        if(count ==0)
        cout<<"YES"<<"\n";
        else if(count ==2)
        {
            if(c1==c4 && c2==c3)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else
        cout<<"NO"<<"\n";
    }

    else
    cout<<"NO"<<"\n";

    return 0;
}
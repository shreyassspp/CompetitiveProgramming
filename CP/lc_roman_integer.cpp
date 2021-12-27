#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;

    map <char,int> value;
        value['I'] = 1;
        value['V'] = 5;
        value['X'] = 10;
        value['L'] = 50;
        value['C'] = 100;
        value['D']= 500;
        value['M'] = 1000;
        
        int ans = 0;
        for(int i =0;i<s.length();i++)
        {
            
            
            if(s[i]=='I'&&(i+1)<s.length()&&(s[i+1]=='V'||s[i+1]=='X'))
            {
                ans+= value[s[i+1]]-value[s[i]];
                i+=1;
            }
            else if(s[i]=='X'&&(i+1)<s.length()&&(s[i+1]=='L'||s[i+1]=='C'))
            {
                ans+= value[s[i+1]]-value[s[i]];
                i+=1;
            }
            else if(s[i]=='C'&&((i+1)<s.length())&&(s[i+1]=='D'||s[i+1]=='M'))
            {
                ans+= value[s[i+1]]-value[s[i]];
                i+=1;
            }
            else
                ans+=value[s[i]];
        }
        
    cout<<ans<<"\n";
    return 0;
}
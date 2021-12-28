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

    string ans = "";

    for(int i = 0;i<s.length();i++)
    {
        char c = s[i];
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='Y'||
            c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
            continue;
        ans+=string(1,'.')+char(tolower(c));
    }


    cout<<ans<<"\n";

    return 0;
}
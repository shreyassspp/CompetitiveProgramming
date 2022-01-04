#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    cin>>a;

    bool b =1;

    for(int i =0;i<a.length();i++)
    {
        if(a[i]=='0')
        {
            a = a.substr(0,i) + a.substr(i+1,a.length());
            b = 0;
            break;
        }
    }

    if(b)
    cout<<a.substr(1,a.length())<<"\n";
    else
    cout<<a<<"\n";
    
    return 0;
}
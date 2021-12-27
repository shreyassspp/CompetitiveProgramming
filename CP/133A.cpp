#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string p;
    cin>>p;
    bool f =0;
    for(int i =0;i<p.length();i++)
    {
        char c = p[i];
        if(c=='H'||c=='Q'||c=='9')
        {
            f=1;
            break;
        }
    }

    if(f)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}
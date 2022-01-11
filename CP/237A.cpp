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

    int h,m;
    int h1,m1;

    int ans =1;
    int f =1;
    cin>>h>>m;

    for(int i =1;i<n;i++)
    {
            cin>>h1>>m1;

            if(h1==h && m1==m)
            f++;
            else
            f=1;

            if(f>ans)
            ans =f;

            h=h1;m=m1;
    }

    cout<<ans<<"\n";

    return 0;
}

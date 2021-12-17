#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ax,ay,bx,by,cx,cy;
int n;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   
    cin>>n;

    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;


    int b1 = bx - ax;int b2=by-ay;
    int c1= cx-ax; int c2=cy-ay;

    if((b1^ c1) >= 0 && ((b2^c2)>=0))
    cout<<"YES"<<"\n";
    else
    cout<<"NO";

    return 0;
} 


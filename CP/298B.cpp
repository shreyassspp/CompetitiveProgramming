#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    ll sx,sy,ex,ey;
    cin>>t;
    cin>>sx>>sy>>ex>>ey;

    ll horiz = ex-sx;
    ll verti = ey-sy;

    char h,v;

    h ='E',v='N';

    if(horiz>0)
     h ='E';
    else if(horiz<0)
     h ='W';

    if(verti>0)
    v = 'N';
    else if(verti<0)
    v='S';


    string directions;
    cin>>directions;
    int ans = 0;

    for(int i =0;i<directions.length();i++)
    {
        if(directions[i]==h&&horiz!=0)
        {
            if(h=='E')
            horiz--;
            else
            horiz++;
        }
        else if(directions[i]==v&&verti!=0)
        {
            if(v=='N')
            verti--;
            else
            verti++;
        }
        ans++;

        if(horiz==0 && verti==0)
        break;
    }

    if(horiz == 0 && verti ==0)
    cout<<ans<<"\n";
    else
    cout<<"-1"<<"\n";
    
    return 0;
}
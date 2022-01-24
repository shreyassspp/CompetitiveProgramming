#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int size_arr = 1e6+10;

int r[size_arr];
int l[size_arr];

void precompute()
{
    // Make an array and store the most occuring bit out of the map for the location.
    // Answer is the length of segment - maximum number of most set bit in that range.
    ll ans = 1;
    l[1]=0;
    l[0]=0;
    r[0]=2;
    for(int i =1;i<19;i++)
    {
        ans*=2;
        ll j = ans/2;
        while (j<ans)
        {
            r[j++] = ans;
        }

        ll max_1 = ans*2;
        l[ans] = ans;
        j = ans+1;
        while (j<max_1)
        {
            l[j++] = ans;
        }
        
    }
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    precompute();

    int t;
    cin>>t;
    while (t--)
    {
        int left,right;
        cin>>left>>right;

        int avg = (left+right)/2;

        int ans = right-left+1;

        int ans1,ans2;

        if(left==right)
        {
            cout<<"0"<<"\n";
            continue;
        }

        if(l[avg]>left)
        ans1 = avg-l[avg]+1;
        else
        ans1=avg-left+1;


        if(r[avg]<right)
        ans2 = r[avg]-avg;
        else
        ans2= right-avg;

        if(r[avg]==right)
        ans2-=1;


        ans-=(ans1+ans2);

        cout<<ans<<"\n";
    }
    

    return 0;
}

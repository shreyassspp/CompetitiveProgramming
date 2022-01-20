#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void precompute();

const int size_arr = 1e6+10;
int arr[size_arr];

void precompute()
{

    ll ans =1;
    int count =0;

    for (int i = 1; i <=20; i++)
    {
        ans*=2;

        ll j = ans/2;

        while (j<ans)
        {
            arr[j] = count;
            j++;
        }
        count++;
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
        int l,r;
        cin>>l>>r;

        if((l&(l-1))==0 && (r&(r-1))==0 && l!=1)
        cout<<arr[r]-arr[l]+1<<"\n";
        else
        cout<<arr[r]-arr[l]<<"\n";
    }
    

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;

    cin>>n>>k;

    int arr[n+5];
    bool b = 1;

    for(int i = 1;i<k;i++)
    cin>>arr[i];

    cin>>arr[k];

    for(int i = k+1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=arr[k])
        {
            b=0;
            break;
        }
    }

    if(b)
    {
        int count = 0;
        for(int i =k-1;i>=1;i--)
        {
            if(arr[i]==arr[k])
            count++;
            else
            break;
        }

        cout<<(k-count-1)<<"\n";
    }
    else
    cout<<-1<<"\n";

    
    return 0;
}
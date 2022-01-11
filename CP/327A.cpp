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

    int arr[n];

    int b[n];

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        b[i]=-1;
        else
        b[i]=1;
    }

    

    return 0;
}

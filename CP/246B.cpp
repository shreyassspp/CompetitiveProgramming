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

    ll sum1 =0;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin>>x;

        sum1+=x;
    }

    if(sum1%n==0)
    cout<<n<<"\n";
    else
    cout<<n-1<<"\n";
    


    return 0;
}

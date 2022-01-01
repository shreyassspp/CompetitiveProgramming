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

    int x;
    int count_1 =0,count_2=0;

    while (n--)
    {
        cin>>x;
        if(x==100)
        count_1++;
        else
        count_2++;
    }
    
    if(count_1%2==0 && count_2%2==0)
    cout<<"YES"<<"\n";
    else if(count_1%2==0 && count_1!=0)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    return 0;
}
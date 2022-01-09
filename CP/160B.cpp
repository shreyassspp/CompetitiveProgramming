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
    string a,b;



    for (size_t i = 0; i < n; i++)
    {
        /* code */
        char c;
        cin>>c;
        a.push_back(c);
    }

    sort(a.begin(),a.end());

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        char c;
        cin>>c;
        b.push_back(c);
    }
    sort(b.begin(),b.end());

    if(a[0]>b[0])
    {
        for(int i =1;i<n;i++)
        {
            if(a[i]<=b[i])
            {
                cout<<"NO"<<"\n";
                return 0;
            }

        }

         cout<<"YES"<<"\n";
            return 0;
    }

    else if(a[0]<b[0])
    {
        for(int i =1;i<n;i++)
        {
            if(a[i]>=b[i])
            {
                cout<<"NO"<<"\n";
                return 0;
            }
        }

        cout<<"YES"<<"\n";
            return 0;
    }

    else
    cout<<"NO"<<"\n";
    

    return 0;
}

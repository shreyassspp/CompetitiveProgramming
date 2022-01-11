#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char arr [4][4];

    for(int i =0;i<4;i++)
    {
        for(int j =0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool f = 0;

    for(int i =0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            char a = arr[i][j];
            char b = arr[i][j+1];
            char c= arr[i+1][j];
            char d = arr[i+1][j+1];

            if(a==b&&a==c)
            {
                f=1;
                break;
            }
            else if(a==b&&a==d)
            {
                f=1;
                break;
            }
            else if(a==c&&a==d)
            {
                f=1;
                break;
            }
            else if(b==c&&b==d)
            {
                f=1;
                break;
            }
        }
        if(f)
        break;
    }

    if(f)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";

    return 0;
}

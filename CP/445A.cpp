#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char result [105][105]; //0 for barren, 1 for black and 2 for white.


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    int m,n;
    cin>>n>>m;

    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=m;j++)
        {
            if((i+j)%2)
            result[i][j]='B';
            else
            result[i][j]='W';
        }
    }

    for(int i =1;i<=n;i++)
    {
        string s;
        cin>>s;
        for(int j =1;j<=m;j++)
        {
            if(s[j-1]=='-')
            result[i][j]='-';
        }
    }

    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=m;j++)
        cout<<result[i][j];
        cout<<"\n";
    }


    return 0;
}

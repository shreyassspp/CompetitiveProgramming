#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char matrix[55][55];

    int t;
    cin>>t;
    while (t--)
    {
        int n,m,r,c;
        bool b =0;

        bool ans = 0;
        cin>>n>>m>>r>>c;
        r-=1;c-=1;

        for(int i =0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                cin>>matrix[i][j];
                if(matrix[i][j]=='B')
                b=1;

                if(i == r || j==c)
                {
                    if(matrix[i][j]=='B')
                    ans =1;
                }
            }
        }

        if(b)
        {
            if(matrix[r][c]=='B')
            cout<<0<<"\n";
            else if(ans)
            cout<<1<<"\n";
            else
            cout<<2<<"\n";
        }
        else
        cout<<-1<<"\n";
    }
    

    return 0;
}

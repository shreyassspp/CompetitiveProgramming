#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int max_1 = max(a,b);
    max_1 = max(max_1,c);

    int min_1 = min(a,b);
    min_1 = min(min_1,c);

    b = a+b+c-max_1-min_1;

    int ans,max_2=0;

    for(int i = 0;i<=n/min_1;i++)
    {
        for(int j =0;j<=n/b;j++)
        {
            
            int d = n-min_1*i-b*j;
            if(d<0)
            break;

            if(d==0)
            {
                ans = i+j;
                if(max_2<ans)
                max_2 = ans;
            }

            if(d%max_1==0)
            {
                ans = i+j+(d/max_1);
                if(max_2<ans)
                max_2 = ans;
            }
        }
    }


    cout<<max_2<<"\n";

    return 0;
}

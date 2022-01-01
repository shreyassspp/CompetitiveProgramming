#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int matrix [6][6];

    int n = 5;
    int p[n+1];
    int ans =-1,tmp;

    for(int i =0;i<n;i++)
    {
        for (int j = 0; j <n; j++)
        {
           cin>>matrix[i][j];
        }
        
    }

    for(int i =0;i<n;i++)
    p[i]=i;
    
    do
    {
        /* code */

        //01234
        tmp=matrix[p[0]][p[1]] + matrix[p[1]][p[0]];
        tmp += matrix[p[2]][p[3]] + matrix[p[3]][p[2]] ;

         //1234
        tmp+=matrix[p[1]][p[2]] + matrix[p[2]][p[1]];
        tmp+=matrix[p[3]][p[4]] + matrix[p[4]][p[3]];

         //234
        tmp+=matrix[p[2]][p[3]] ;
        tmp+=matrix[p[3]][p[2]] ;

         //34
        tmp+=matrix[p[3]][p[4]] ;
        tmp+=matrix[p[4]][p[3]] ;

        if(tmp>ans)
        {
            ans=tmp;
        }



    } while (next_permutation(p,p+n));

    cout<<ans<<"\n";
    
    return 0;
}
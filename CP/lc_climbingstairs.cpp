#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int solution(int a);

int ans [50];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; 
    cin>>n;

    ans[0]=ans[1]=1;

    cout<<solution(n);
    
    return 0;
}

 int solution(int n)
    {
         if(n<0)
            return 0;
        if(n==0)
            return 1;
        
        if(ans[n]==0)
        {
            int count = 0;
            count += solution(n-1)+solution(n-2);
            ans[n] = count;
        }
        return ans[n];
    }
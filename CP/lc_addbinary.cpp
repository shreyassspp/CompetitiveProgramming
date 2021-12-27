#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b;
    cin>>a>>b;

    string ans = "";
        
        int i = a.length()-1;
        int j = b.length()-1;
        
        int sum =0,carry =0;
        while(i>=0||j>=0||sum>0)
        {
            if(i>=0) sum+=(a[i--] -'0');
            if(j>=0)sum+=(b[j--]-'0');
            
            sum += carry;
            if(sum>1)
            {
                sum-=2;
                carry =1;
            }
            
            ans+= sum+'0';
            sum = carry;
            carry =0;
        }

        reverse(ans.begin(),ans.end());

        cout<<ans<<"\n";
    return 0;
}
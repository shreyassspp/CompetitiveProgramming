#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string num1,num2;

    cin>>num1>>num2;

    string ans = "";
        int sum =0;
        
        int i=num1.length()-1;
        int j=num2.length()-1;
        
        while(i>=0 && j>=0)
        {
            sum+= int(num1[i])-48 + int(num2[j])-48;
            ans = to_string(sum%10) + ans;
            sum/=10;
            --i;
            --j;
        }
        
        while(i>=0)
        {
            sum+= int(num1[i])-48;
            ans = to_string(sum%10) + ans;
            sum/=10;
            --i;
        }

         while(j>=0)
        {
            sum+= int(num2[j])-48;
            ans = to_string(sum%10) + ans;
            sum/=10;
            --j;
        }

        if(sum)
        ans="1"+ans;



    cout<<ans<<"\n";
    return 0;
}
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


    vector<int> nums; int x;

    for(int i =0;i<n;i++)
    {
        cin>>x;
        nums.push_back(x);
    }

    int i =0; 
    int j =nums.size()-1;
    vector<int> ans;
        
    long long a = nums[i]*nums[i];
    long long b =  nums[j]*nums[j];
        
        while(i<=j)
        {
            if(a<b)
            {
                ans.push_back(a);
                i++;
                a= nums[i]*nums[i];
            }
            else
            {
                ans.push_back(b);
                j--;
                b = nums[j]*nums[j];
            }
        }

    
    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\n";
    }

    return 0;
}
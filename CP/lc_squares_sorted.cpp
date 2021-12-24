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

    int count;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                count++;
            else
                break;
        }
        
        int i =count-1; int j =count;
        
        long long a = nums[i]*nums[i];
        long long b = nums[j]*nums[j];
        
        vector<int> ans;
        
        while(i>0 && j<(nums.size()-1))
        {
            if(a<b)
            {
                ans.push_back(a);
                i--;
                a = nums[i]*nums[i];
                
            }
            else
            {
                ans.push_back(b);
                j++;
                b = nums[j]*nums[j];
            }
        }

        
        
        while(i>=0)
        {
            a = nums[i]*nums[i];
            ans.push_back(a);
                i--;
        }
        
          while(j<nums.size())
        {
            b = nums[j]*nums[j];
            ans.push_back(b);
                j++;
        }
        

    
    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\n";
    }

    return 0;
}
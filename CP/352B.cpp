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

    vector<int> a[100001];

    vector<pair<int,int>>ans; //First element stores value of x and second the value of Common Difference.
     int x;

    for(int i = 0;i<n;i++)
    {
              
       cin>>x;
       a[x].push_back(i);
    }

    for(int i = 0;i<100001;i++)
    {
        if(a[i].size()==0)
        continue;
        else if(a[i].size()==1) ans.push_back({i,0});
        else
        {
            vector<int> curr = a[i];
            int cd = curr[1]-curr[0];
            int j =2; bool b= 1;
            while (j<curr.size())
            {
                if(curr[j]-curr[j-1]!=cd)
                {
                    b=0;
                    break;
                }
                j++;
            }

            if(b)
            ans.push_back(make_pair(i,cd));
            
        }
    }

    cout<<ans.size()<<"\n";
     for(int i=0;i<ans.size();i++)
      {
         cout<<ans[i].first<<" "<<ans[i].second<<"\n";
      }    

   
}
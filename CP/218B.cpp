#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;
    int x;

    vector<int> planes;
    priority_queue<int> planes1;
    for(int i =0;i<m;i++)
    {
        cin>>x;
        planes.push_back(x);
        planes1.push(x);
    }



    int max_cost = 0,min_cost = 0;
   
    sort(planes.begin(),planes.end());

    int n_min = 0;
    int i =n;
    int k ;

    while (i--)
    {
        x = planes1.top();
        max_cost += x;
        planes1.pop();
        planes1.push(x-1);
    }
    

   
    i =0 ;
    while (n_min<n)
    {
        k= planes[i];
        if(n-n_min>=k){
        min_cost+= ((planes[i])*(planes[i]+1))/2;
        i++;
        n_min +=k;
        }
        else
        {
            int a = n-n_min;
            min_cost+= a*planes[i]-((a-1)*a)/2;
            break;
        }
    }
    

    cout<<max_cost<<" "<<min_cost<<"\n";
    
    
    return 0;
}
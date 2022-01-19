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

    int arr[n];

    for(int i =0;i<n;i++)
    cin>>arr[i];

    stack<int> nge;
    int ans[n];

    for(int i =0;i<n;i++)
    {
        if(nge.empty())
        nge.push(i);
        else
        {
            int index = nge.top();
            while (arr[index]<arr[i])
            {
                /* code */
                ans[index] = arr[i];
                nge.pop();
                
                if(nge.empty())
                break;
                index = nge.top();
            }
            nge.push(i);
        }
    }

    while (!nge.empty())
    {
        /* code */
        ans[nge.top()] = -1;
        nge.pop();
    }

    for(auto it:ans)
    cout<<it<<" ";
    
    
    

    return 0;
}

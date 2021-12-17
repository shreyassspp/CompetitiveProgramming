/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int [],int );

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int n,x;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        solve(a,n);

    }
    return 0;
}

void solve(int a[],int n)
{
    deque<int> ans;
    // cout<<n<<"\n";
    
    if(a[0]!=n && a[n-1]!=n)
    cout<<-1<<"\n";
    else
    {
    
    int fr =0,bk = n-1;
    
    while(bk>=fr)
    {
        if(a[fr]<a[bk])
        {
        ans.push_back(a[bk]);
        bk--;
        }
        else if(a[fr]>a[bk])
        {
            ans.push_front(a[fr]);
            fr++;
        }
        else
        {
            ans.push_back(a[fr]);
            fr++;
        }

    }

    deque<int>:: iterator it;
    for(it = ans.begin();it!=ans.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<"\n";
    }
}
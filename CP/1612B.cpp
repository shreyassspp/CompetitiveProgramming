#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isValid(int ,int, int);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    int n,a,b;

    while(t--)
    {
        cin>>n>>a>>b;
        set<int> b1;
        set<int> a1;

        if(!isValid(a,b,n))
        {
        cout<<"-1"<<"\n";
        continue;
        }
       int t = b;
       b1.insert(t);
       t=1;

        while (b1.size()<n/2 && t<b)
        {
            if(t!=a)
            b1.insert(t);
            t++;
        }
    //    for(int i =0;i<n/2;i++)
    //    {
    //        if(t!=a)
    //        b1.insert(t);
    //        else
    //        {
    //            t-=1;
    //            b1.insert(t);
    //        }
    //        t-=1;
    //    }

       t = a;
       a1.insert(t);
       t=n;

        while (a1.size()<n/2 && t>a)
        {
            if(t!=b && b1.find(t)==b1.end())
            a1.insert(t);
            --t;
        }

        set<int> :: iterator it;
        for(it = a1.begin();it!=a1.end();it++)
        cout<<*it<<" ";

        for(it = b1.begin();it!=b1.end();it++)
        cout<<*it<<" ";

        cout<<"\n";
        

    }
    return 0;
}

bool isValid(int a,int b,int n)
{
    if(b>a)
    {
        if(b<=n/2 || (a>=(n/2+1)))
        return false;
        return true;
    }

    if(b<n/2||(a>(n/2+1)))
    return false;
    return true;
}
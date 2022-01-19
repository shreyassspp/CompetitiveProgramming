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
    vector<ll> v(n);

    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int start =0,end=0;
    int k =1;
    

    for(int i =1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            if(k==1)
            {
                start = i-1;
            }

            k++;
        }

        else
        {
            if(k>1)
            {
                end = i-1;
                break;
            }
        }
    }
    if(k>1 && end ==0)
    end = n-1;


    for(int i =0;i<(end-start+1)/2;i++)
    {
        ll t = v[i+start];
        v[i+start] = v[end - i];
        v[end-i] = t;
    }


    for(int i =1;i<v.size();i++)
    {
        if(v[i]<v[i-1])
        {
            cout<<"no"<<"\n";
            return 0;
        }
    }

    cout<<"yes"<<"\n";
    cout<<start+1<<" "<<end+1<<"\n";

    return 0;
}

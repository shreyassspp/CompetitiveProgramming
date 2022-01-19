#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool isPalindrome(vector<int> &v)
{

    int i =0,j=v.size()-1;

    while (i<=j)
    {
        if(v[i]!=v[j])
        return false;

        i++;
        j--;
    }

    return true;
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i =0;i<n;i++)
        cin>>a[i];

        if(n==1 || n==2)
        cout<<"YES"<<"\n";
        else
        {
            bool b =1;

            int i =0,j=n-1;

            while ((i<=j))
            {
                if(a[i]!=a[j])
                {
                    b=0;
                    break;
                }

                i++;
                j--;
            }
            
            if(b)
            cout<<"YES"<<"\n";
            else
            {
                vector<int> b1 ;
                vector<int> c1 ;

                for(int k =0;k<a.size();k++)
                {
                    if(a[k]!=a[i])
                    b1.push_back(a[k]);

                    if(a[k]!=a[j])
                    c1.push_back(a[k]);
                }

            if(isPalindrome(b1)||isPalindrome(c1))
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
            }
        }
    }

    return 0;
}

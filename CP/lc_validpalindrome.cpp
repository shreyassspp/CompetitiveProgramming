#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool validPalindrome(string s);

string substring(string x, int i , int j)
{

    string ans ="";
    for(int k =i;k<=j;k++)
    {
        ans+=x[k];
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;

    if(validPalindrome(s))
    cout<<"true"<<"\n";
    else
    cout<<"false"<<"\n";

    return 0;
}


bool validPalindrome(string s) {
        //Hey What's Up boiis ?? ebcbbececabbacecbbcbe
        
       int i =0, j = s.length()-1;
        
        int count =0;
        
        while(i<j)
        {
            if(s[i]==s[j])
            {
                ++i,--j;
            }
            
            else 
            {

                string s1 = substring(s,i,j-1);
                string s2 = substring(s,i+1,j);
                
                string s3 = s1;
                string s4 = s2;
                
                reverse(s1.begin(),s1.end());
                reverse(s2.begin(),s2.end());
                return (s3==s1 || s4==s2);
                }
        }
        return true;
    }
    
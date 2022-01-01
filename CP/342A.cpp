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
    map<int,int> freq;
    int x;

    for(int i =0;i<n;i++)
    {
        cin>>x;
        freq[x]++;
    }

    bool b = 1;
    int seq1 = 0;int seq2 =0;int seq3 =0;


    if(freq[3]>0)
    {
        if(freq[1]>=freq[3]&&freq[6]>=freq[3]){
        seq3 = freq[3];
        freq[1]-=freq[3];
        freq[6]-=freq[3];
        freq[3]=0;
        }
        else
        {
            cout<<"-1"<<"\n";
            return 0;
        }
    }

    if(freq[1]!=0&&freq[2]!=0&&freq[4]!=0)
    {
        seq1 = min(freq[1],freq[2]);
        seq1= min(seq1,freq[4]);

        freq[1]-=seq1,freq[2]-=seq1,freq[4]-=seq1;
    }

      if(freq[1]!=0&&freq[2]!=0&&freq[6]!=0)
    {
        seq2 = min(freq[1],freq[2]);
        seq2= min(seq2,freq[6]);

        freq[1]-=seq2,freq[2]-=seq2,freq[6]-=seq2;
    }




    for(auto it = freq.begin();it!=freq.end();it++)
    {
        if(it->second!=0)
        {
            cout<<"-1"<<"\n";
            return 0;
        }
    }

    for(int i =1;i<=seq1;i++)
    cout<<"1 2 4"<<"\n";

    for(int i =1;i<=seq2;i++)
    cout<<"1 2 6"<<"\n";

    for(int i =1;i<=seq3;i++)
    cout<<"1 3 6"<<"\n";

   
    
    return 0;
}
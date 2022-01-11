#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;

    vector<pair<int,int>> table;

    for(int i =0;i<n;i++)
    {
        int p,t;
        cin>>p>>t;
        table.push_back({-p,t});
    }

    sort(table.begin(),table.end());


    int count = 1;
    --k;

    int i = k;

    while (i>0)
    {
        int p1 = table[i].first;
        int p2 = table[i-1].first;

        int t1 = table[i].second;
        int t2 = table[i-1].second;

        if(p1==p2 && t1==t2)
        count++;
        else
        break;

        --i;
    }

    i = k;

    while (i<n-1)
    {
        int p1 = table[i].first;
        int p2 = table[i+1].first;

        int t1 = table[i].second;
        int t2 = table[i+1].second;

        if(p1==p2 && t1==t2)
        count++;
        else
        break;

        ++i;
    }

    cout<<count<<"\n";

    return 0;
}


/* 50 22
4 9
8 1
3 7
1 2
3 8
9 8
8 5
2 10
5 8
1 3
1 8
2 3
7 9
10 2
9 9
7 3
8 6
10 6
5 4
8 1
1 5
6 8
9 5
9 5
3 2
3 3
3 8
7 5
4 5
8 10
8 2
3 5
3 2
1 1
7 2
2 7
6 8
10 4
7 5
1 7
6 5
3 1
4 9
2 3
3 6
5 8
4 10
10 7
7 10
9 8
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ifstream myfile;
    myfile.open("input.txt");

    int n;
    myfile>>n;

    vector<int> v[5005];

    for(int i =0;i<2*n;i++)
    {
        int x;
        myfile>>x;
        v[x].push_back(i+1);
    }

    myfile.close();

    ofstream myfile1;
    myfile1.open("output.txt");

    bool b = 1;

    for (size_t i = 0; i < 5005; i++)
    {
        if(v[i].size()%2==1)
        {
            b=0;
            break;
        }
    }

    if(b)
    {
        for (size_t i = 0; i < 5005; i++)
        {
            vector<int> v1 = v[i];
            for (size_t i = 0; i < v1.size(); i++)
            {
                myfile1<<v1[i++]<<" "<<v1[i]<<"\n";
            }
            
        }
        
    }

    else
    myfile1<<-1<<"\n";

    myfile1.close();
    
    return 0;
}

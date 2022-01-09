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

    int n,m;

    myfile>>n;
    myfile>>m;

    myfile.close();

    ofstream myfile1;
    myfile1.open ("output.txt");

    // myfile << "Writing this to a file.\n";
    
    char f,s;

    if(n>m)
    {
        f = 'B';
        s ='G';

        for(int i = 0;i<m;i++)
        {
            myfile1<<f<<s;
        }
        for (size_t i = 0; i < (n-m); i++)
        {
            myfile1<<f;
        }
        
    }

    else
    {
        f='G';
        s='B';

        for(int i = 0;i<n;i++)
        {
            myfile1<<f<<s;
        }
        for (size_t i = 0; i < (m-n); i++)
        {
            myfile1<<f;
        }
    }

    myfile1.close();
    return 0;
}

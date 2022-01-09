#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	int n,ans;
    ans =0;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
		{
			int k=sqrt(i*i+j*j);
			if(i*i+j*j==k*k&&k<=n)
				ans++;
		}
	cout<<ans;
}

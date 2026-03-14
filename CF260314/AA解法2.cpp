#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		unordered_map <int,int> sum;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				int tmp;
				cin>>tmp;
				sum[tmp]++;
			}
		}
		int maxx=0;
		for(auto &p:sum)
		{
			maxx=max(maxx,p.second);
		}
		if(maxx>n*(n-1))
			cout<<"NO"<<'\n';
		else cout<<"YES"<<'\n';
	}
	return 0;
}

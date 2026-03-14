#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int tmp;
		cin>>tmp;
//		if(pow(tmp,2)%6!=0)
//		{
//			cout<<tmp<<" is "<<tmp<<'\n';
//		}
		if(pow(swap(pow(tmp,2)/3),2)*3==tmp) cout<<tmp<<" is a triple flower"<<'\n';	
		else if(pow(swap(tmp/2),2)*2==tmp) cout<<tmp<<" is a double flower"<<'\n';
		else cout<<tmp<<" is "<<tmp<<'\n';
	}	
	return 0;
 } 

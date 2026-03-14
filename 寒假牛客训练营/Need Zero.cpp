#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		
//	}
	int n;
	cin>>n;
	string s=to_string(n);
//	cout<<s[s.size()-1]<<endl;
	if(s[s.size()-1]=='0')
		cout<<1<<'\n';
	else if(s[s.size()-1]== '1') cout<<10<<'\n';
	else if(s[s.size()-1] == '2')cout<<5<<'\n';
	else if(s[s.size()-1] == '3')cout<<10<<'\n';
	else if(s[s.size()-1] == '4' )cout<<5<<'\n';
	else if(s[s.size()-1] == '5') cout<<2<<'\n';
	else if(s[s.size()-1] == '6')cout<<5<<'\n';
	else if(s[s.size()-1] == '7')cout<<10 <<'\n';
	else if(s[s.size()-1] == '8')cout<<5<<'\n';
	else if(s[s.size()-1] == '9')cout<<10<<'\n';
	return 0;
}

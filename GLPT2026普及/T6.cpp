#include <bits/stdc++.h>
using namespace std;
int a[2000];
#define int long long
bool findd()
{
	while(true)
	{
		int tmp;
		cin>>tmp;
		if(tmp==-1) 
		{
			memset(a,0,sizeof(a));
			return false;
		}
		a[tmp]++;
		if(a[tmp]>1)
		{
			cout<<tmp<<'\n';
			memset(a,0,sizeof(a));
			return true;
		}
	}
}
signed main()
{
	int n;
	cin>>n;
	while(n--)
	{
		bool flag=findd();
		if(!flag) cout<<"NONE"<<'\n';
//		while(true)
//		{
//			int tmp;
//			cin>>tmp;
//			if(tmp==-1)
//			{
//				memset(a,0,sizeof(a));
//				break;
//			}
//			a[tmp]++;
//			if(a[tmp]>1)
//			{
//				cout<<tmp<<endl;
//				flag=true;
//				memset(a,0,sizeof(a));
//				break;
//			}
//		}
//		if(!flag)
//			cout<<"NONE"<<endl;
	}
	return 0;
}

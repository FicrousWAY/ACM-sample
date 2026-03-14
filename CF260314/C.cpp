#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		double c[100005];//存储价值 
		double k[100005];//存储题目定义的一坨玩意 
		for(int i=1; i<=n;i++)
		{
			int ci,pi;
			cin>>ci>>pi;
			c[i]=ci;
			k[i]=1.0-pi/100.0;
			 
		}
		double precision=0.00;
		for(int i=n;i>=1;i--)//逆向dp，取不做任务和做任务的未来收益的最大值 
		{
			precision=max(precision,c[i]+k[i]*precision);
		}
		//注意精度 
		cout<<fixed<<setprecision(10)<<precision<<'\n';
	}
	return 0;
}

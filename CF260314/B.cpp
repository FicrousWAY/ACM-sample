#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,p,m;
		cin>>n>>k>>p>>m;
		vector <int> a(n+1);
		for(int i=1; i<=n;i++)//存储每张牌的能量消耗 
		{
			cin>>a[i];
		 } 
		int we=a[p];//单存赢牌的消耗 
		vector <int> nw;
		for(int i=1;i<=n;i++)//存非赢牌的消耗 
		{
			if(i!=p) nw.push_back(a[i]);
		}
		int d=n-k;//处理循环步长 
		long long ex1=0;
		if(d > 0)
		{
			sort(nw.begin(),nw.end());//排序后每次都取最小消耗的能量 
			for(int i=0;i<d;i++){
				ex1 += nw[i]; 
			}
			
		}
		long long ex2=0;
		if(p>k)//计算首次打出的额外成本，如果一开始就在k以内则不需要额额外打牌，否则先清除p-k张再取最小能量消耗 
		{
			vector <int> before;
			for(int i=1;i<p;i++)
			{
				before.push_back(a[i]);
			}
			int d2=p-k;
			sort(before.begin(),before.end());
			for(int i=0;i<d2;i++)
			{
				ex2 +=before[i];
			}
		}
		long long cost1=ex2+we;
		if(cost1 > m)//判断最小打牌次数 
		{
			cout<<0<<'\n';
			continue;
		}
		long long tmp1=(long long)we+ex1;
		long long re=(long long)m-cost1;
		long long add=re/tmp1;
		long long ans=add+1;
		cout<<ans<<'\n';
	}
	return 0;
 } 

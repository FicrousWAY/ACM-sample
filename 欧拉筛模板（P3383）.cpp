#include <bits/stdc++.h>
using namespace std;
int n,q;
int main()
{
	cin>>n>>q;//n为数量范围，q为查询次数，查询的为第q个素数 
	vector <int> a(n+1);//该数组用于遍历n个数 
	vector <int> prime;//该数组用于存储素数 
	a[1]=1;//1不是素数，重置 
	for(long long i=1;i<=n;i++)
	{
		if(!a[i])prime.push_back(i);//如果这个数没有被筛过则加入素数数组 
		for(auto p:prime)
		{
			if(i*p>n) break;//超出数量范围就break 
			a[i*p]=1;//筛 
			if(i%p==0) break;//找到对于i这个数的最小因子就break，这样可以确保每一个数都被筛一次且被自己的 最小因子筛去 
		}
	}
	while(q--)
	{
		int m;
		cin>>m;
		cout<<prime[m-1]<<endl;
	}
	return 0;
}

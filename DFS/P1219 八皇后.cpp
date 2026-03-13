#include <bits/stdc++.h>
using namespace std;
//此题便不仅仅是重复路径判断和障碍物判断
//难点在于对于对角线的标记
//捺对角线为行-列+总列数
//撇对角线为行+列
//相当于障碍物就是列，两条对角线，通过行搜索可以规避掉行重复的问题，同时也满足题目的最小字典序
//注意搜索完之后的回溯重置，防止死循环 
int n,ans;
int pos[30];
int colo[30];
int xxx[30];
int yyy[30];
int total; 
void print()
{
	if(total<=3)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<pos[i]<<" ";
		}
		cout<<endl;
	}
}
void dfs(int x)
{
	if(x>n)
	{
		total++;
		print();
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(colo[i] || xxx[x-i+n] || yyy[x+i])continue;
		colo[i]=1;
		xxx[x-i+n]=1;
		yyy[x+i]=1;
		pos[x]=i;
		dfs(x+1);
		pos[x]=0;
		colo[i]=0;
		xxx[x-i+n]=0;
		yyy[x+i]=0;
	}
}
int main()
{
	cin>>n;
	dfs(1);
	cout<<total<<endl;
	return 0;
}

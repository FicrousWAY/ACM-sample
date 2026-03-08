#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <int> Map(n);
int dfs(int u,int fa)
{
	//此处可写进入节点的操作 
	for(auto v:Map[u])
	{
		if(v==fa)continue;
		//此处可写往下搜索的时候进行的操作 
		dfs(v,u);
		//此处可写从此节点往上回的时候的操作 
	}
	//此处可写离开此节点时候的操作 
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		Map[a].push_back(b);
		Map[b].push_back(a);//双向无权边的存储 
		dfs(1,0);
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
//此题为标准的探照灯全匹配，标准的dfs板子题 
int n,m,t;
int sx,sy,fx,fy;
int mapp[50][50];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int ans;
void dfs(int x,int y)
{
	if(x==fx && y==fy)//终点判断 
	{
		ans++;//ans定义在全局所以直接累加 
		return;//回到上一个节点 
	}
	for(int i=0;i<4;i++)//四个探照灯方向 
	{
		int newx=x+dx[i];
		int newy=y+dy[i];
		if(newx<1 || newx>m || newy<1 ||newy>n)//边界判断 
		{
			continue;
		}
		if(mapp[newx][newy] == 1)//障碍物判断 
		{
			continue;
		}
		mapp[newx][newy]=1;//防止走回头路死循环，先把走过的标记为1，因为return条件唯一是找到终点，所以单条路径直接边走边标记 
		dfs(newx,newy);
		mapp[newx][newy]=0;//回溯，为下一条路径准备 
	}
}
int main()
{
	cin>>n>>m>>t;
	cin>>sx>>sy>>fx>>fy;
	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a>>b;
		mapp[a][b]=1;//注意此处将障碍物标记为1 
	}
	mapp[sx][sy]=1;//起点标记为1防止死循环 
	dfs(sx,sy);//从起点开始搜索 
	cout<<ans<<endl;
	return 0;
}

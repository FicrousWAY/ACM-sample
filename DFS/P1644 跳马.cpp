#include <bits/stdc++.h>
using namespace std;
int n,m;
int dx[4]={-2,-1,1,2};
int dy[4]={1,2,2,1};
int mapp[50][50];
int total; 
void dfs(int x,int y)
{
	if(x==n && y==m)
	{
		total++;
		return;
	}
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx < 0 || nx > n || ny > m)
		{
			continue;
		}
		if(mapp[nx][ny]==1) continue;
		mapp[nx][ny]=1; //此题因为规定了方向，所以不会走回头路，理论上这个死循环判断和回溯部分可以删去 
		dfs(nx,ny);
		mapp[nx][ny]=0;
}
}
int main()
{
	cin>>n>>m;
	dfs(0,0);
	cout<<total<<endl;
	return 0;
}

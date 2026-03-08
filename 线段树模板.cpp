#include <bits/stdc++.h>
using namespace std;
#define int long long
#define lc p<<1
#define rc p<<1|1
//超级牛逼的线段树板子，可以做到区间修改和查询都是logn级别的复杂度 
int v[10086];
struct Node{
	int l,r,sum,add;
}tree[10086*4];
void build(int p,int l,int r)//建树 
{
	tree[p]={l,r,v[l]};
	if(l==r)
		return;
	int mid=l+r>>1;
	build(lc,l,mid);
	build(rc,mid+1,r);
	tree[p].sum = tree[lc].sum+tree[rc].sum; 
}
void update(int p,int x,int k)//单节点更新 
{
	if(tree[p].l==x && tree[p].r==x)//找到要修改的叶子节点并更改 
	{
		tree[p].sum += k;
		return;
	}
	int mid=tree[p].l+tree[p].r>>1;
	if(x>mid)update(rc,x,k);//递归查找子树找节点 
	if(x<=mid) update(lc,x,k);
	tree[p].sum = tree[lc].sum+tree[rc].sum;//向上更新 
}
int query(int p,int x,int y)//区间查询 
{
	if(x<=tree[p].l && tree[p].r <= y)
	{
		return tree[p].sum;
	}
	int mid=tree[p].l+tree[p].r>>1;
	int sum=0;//局部变量=0保证回溯的时候不会带上父节点的值 
	if(x<=mid) sum+=query(lc,x,y);//左子树有重叠，查找左子树 
	if(y>mid) sum+=query(rc,x,y);//右子树有重叠，查找右子树
	return sum;
}
void pushup(int p)
{
	tree[p].sum = tree[lc].sum+tree[rc].sum;
} 
void pushdown(int p)//向下更新的同时下放懒标记 
{
	if(tree[p].add)
	{
		tree[lc].sum += tree[p].add*(tree[lc].r-tree[lc].l+1);
		tree[rc].sum += tree[p].add*(tree[rc].r-tree[rc].l+1);
		tree[lc].add += tree[p].add;
		tree[rc].add += tree[p].add;
		tree[p].add=0; 
	}
}
void _update(int p,int x,int y,int k)
{
	if(x<=tree[p].l && tree[p].r<=y)//打懒标记 
	{
		tree[p].sum+=(tree[p].r-tree[p].l+1)*k;
		tree[p].add+=k;
		return;
	}
	int mid=tree[p].l+tree[p].r>>1;
	pushdown(p);//先向下更新下移懒标记 
	if(x<=m) update(lc,x,y,k);//查找 
	if(y>m) update(rc,x,y,k);
	pushup(p); //向上更新返回结果 
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	return 0;
}


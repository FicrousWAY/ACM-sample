#include <bits/stdc++.h>
using namespace std;
struct edge {
	int u,v,w;
	bool operator < (const edge &t)const { //为下面的sort函数重构小于号使得可以按边权升序排列
		return w<t.w;
	}
};
vector <edge> MAP;
int main() {
	int m;//代表有m个边
	scanf("%d",&m);
	for(int i=0; i<m; i++) {
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		MAP.push_back({a,b,c});//进行存图
	}
	sort(MAP.begin(),MAP.end());//用上面结构体内重构的比较方法进行按边权升序排列
	for(auto e : MAP) cout<<e.u<<e.v<<e.w<<endl;//输出结果
	return 0;
}

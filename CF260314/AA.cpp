//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
////	1 2 3 4 5
////	5 6 7 8 5
////	1 2 3 4 5
////	5 6 7 8 5
////	1 2 3 4 5
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		bool flag=false;
//		int n;
//		cin>>n;
//		int a[20000]={0};
//		for(int i=0;i<n;i++)
//		{
//			if(flag)break;
//			for(int j=0;j<n;j++)
//			{
//				int tmp;
//				cin>>tmp;
//				a[tmp]++;
//				if(n%2==0)
//				{
//					if(a[tmp]>n*(n/2)) 
//					{
//						cout<<"NO"<<'\n';
//						flag=true;
//						break;
//					}
//				}
//				else
//				{
//					if(a[tmp]>n*(n/2)+n/2+1)
//					{
//						cout<<"NO"<<'\n';
//						flag=true;
//						break;
//					}
//				}
//			}
//		}
//		if(!flag)
//			cout<<"YES"<<'\n';
//	}
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int,int> cnt;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                cnt[x]++;
            }
        }
        int mx = 0;
        for (auto &p : cnt)
            mx = max(mx, p.second);
        if (mx > n * (n - 1))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

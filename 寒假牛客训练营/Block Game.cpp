#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) 
	{
        int n;
        long long k;
        cin>>n>>k;
        vector<long long> a(n + 1);
        for(int i=1;i<=n;i++) 
		{
            cin>>a[i];
        }
        long long ans=a[1]+k;
        ans=max(ans,a[n]+k);
        for(int i=2;i<=n;i++)
		{
            ans=max(ans,a[i]+a[i-1]);
        }
        cout<<ans<<'\n';
    }

    return 0;
}


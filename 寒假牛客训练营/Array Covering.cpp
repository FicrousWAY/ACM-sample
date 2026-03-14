#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=500000+5;
ll a[N],l[N],r[N],stk[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		for(ll i=1;i<=n;i++)
			cin>>a[i];

		ll top=0;
		for(ll i=1;i<=n;i++)
		{
			while(top&&a[stk[top]]<a[i])
				top--;
			l[i]=top?stk[top]:0;
			stk[++top]=i;
		}

		top=0;
		for(ll i=n;i>=1;i--)
		{
			while(top&&a[stk[top]]<a[i])
				top--;
			r[i]=top?stk[top]:0;
			stk[++top]=i;
		}

		ll ans=0;
		for(ll i=1;i<=n;i++)
		{
			ll best=a[i];
			if(l[i])best=max(best,a[l[i]]);
			if(r[i])best=max(best,a[r[i]]);
			ans+=best;
		}
		cout<<ans<<'\n';
	}
	return 0;
}


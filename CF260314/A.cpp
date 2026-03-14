#include <bits/stdc++.h>
using namespace std;
int maxx=0;
//int dfs_max(string x)
//{
//	for(int i=0;i<x.size();i++)
//	{
//		if(x[i]==1)
//			sum++;
//	}
//	if(sum>maxx)
//	{
//		maxx=sum;
//		return 0;
//	}
//	for(int i=0;i<x.size();i++)
//	{
//		if(x[i] == 0 && x[i+1] == 1 && x[i-1] == 1)
//		{	
//			dfs(x);
//		}
//	}
//}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
	{
//        int n;
//        string s;
//        cin >> n >> s;
        int n;
        string s;
        cin>>n>>s;
        int ones=0;
        for(char c:s) if(c=='1') ones++;
        int total = 0;
        int min_sum = 0;
        int i=0;
        while(i<n)
		{
	        if(s[i]=='0')
			{
	            i++;
	            continue;
	        }
	        int sum1 = 0;
	        int sumgap = 0;
	        int len = 0;
	        while(i<n && s[i]=='1')
			{
	            len++;
	            i++;
	        }
	        sum1+=len;
	        while(i<n-1 && s[i]=='0' && s[i+1]=='1')
			{
	            sumgap++;
	            total++;
	            i++;
	            len=0;
	            while(i<n && s[i]=='1')
				{
	                len++;
	                i++;
	            }
	            sum1 += len;
	        }
	        int l=sum1+sumgap;
	        min_sum+=(l+2)/2 ;
        }
        int max1=ones+total;
        cout<<min_sum<<" "<<max1<<endl;
	
	}
	return 0; 
}

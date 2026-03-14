#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"YES"<<endl;
            cout<<"1"<<endl;
        } 
        else if(n==3)
        {
            cout<<"YES"<<endl;
            cout<<"1 2 3"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

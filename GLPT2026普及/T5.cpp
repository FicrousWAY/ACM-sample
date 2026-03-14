#include <bits/stdc++.h>
using namespace std;
int second=-1;
int a,b;
void time(bool flag)
{
	int hour;
	int minute;
	if((second/60) >= 60)
	{
		hour=(second/60)/60;
		minute=(second/60)%60;
		second=second-hour*3600-minute*60;
	}
	else
	{
		hour=0;
		minute=second/60;
		second=second%60;
	}
	if(flag==0)
	{
		cout<<"Wrong Answer ";
	}
	else
	{
		cout<<"Accepted ";
	}
//	cout<<fixed<<setprecision(2)<<hour;
//	cout<<":";
//	cout<<minute;
//	cout<<":";
//	cout<<second;
	cout<<0<<hour<<":";
	if(minute<10) cout<<0<<minute<<":";
	else cout<<minute<<":";
	if(second<10) cout<<0<<second<<endl;
	else cout<<second<<endl;
}
bool countt()
{
	int hour;
	int minute;
	if((second/60) >= 60)
	{
		hour=(second/60)/60;
		minute=(second/60)%60;
		second=second-hour*3600-minute*60;
	}
	else
	{
		hour=0;
		minute=second/60;
		second=second%60;
	}
	if(hour > 3)
	{
		return false;
	}
	return true;
}
int main()
{
	cin>>a>>b;
	while(true)
	{
		int tmp;
		cin>>tmp;
		second+=2;
		if(!countt())
		{
			cout<<tmp<<" ";
			time(false);
			break;
		}
		if(tmp==a+b)
		{
			cout<<tmp<<" ";
			time(true);
			break;
		}
	}
	return 0;
 } 

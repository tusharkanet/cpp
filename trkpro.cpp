#include<iostream>
using namespace std;

class bank
{
	int tbalance=0,damt,wamt;
	public:
	void deposite()
	{
		cout<<"Enter Deposite amount:";
		cin>>damt;
		tbalance+=damt;
		cout<<"your deposite amount is:"<<damt<<endl;
	}
	void withdrawal()
	{
		cout<<"Enter Withdrawal Amount:";
		cin>>wamt;
		if(tbalance<wamt)
		{

			cout<<"Sorry Not Withdrawal Amount"<<endl;
		}
		else
		{
			tbalance-=wamt;
			cout<<"Your Withdrawal Amount is:"<<wamt<<endl;
		}
	}
	void showdata()
};
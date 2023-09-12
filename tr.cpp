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
	{
		cout<<"Tota Balance="<<tbalance<<endl;
	}
};
int main()
    BankAccount account("12300456", "Tushar", 5000.0);
{
	bank b;
	int ch;
	cout<<"1.deposite amount:"<<endl;
	cout<<"2.withdrawal amout:"<<endl;
	cout<<"3.show balance:"<<endl;
	cout<<"0.exit:"<<endl;
	do
	{
		cout<<"enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
			b.deposite();
			break;
			case 2:
			b.withdrawal();
			break;
			case 3:
			b.showdata();
			case 0:
			break;
			default:
			cout<<"wrong choice"<<endl;
			break;
		}
	}while(ch!=0);
}
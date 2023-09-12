#include<iostream>
using namespace std;
class bill{
    public:
    string name,numb;
    int qty[10],bill=0,grossbill=0,disc,amount[10];
    float sgst,cgst,GST,netbill=0;
    string items[10];

    void menu()
    {       cout<<"<=================================WELCOME FAST FOOD ======================================>"<<endl;
            cout<<"\nEnter Your Name :";
            cin>>name;
            cout<<"\nEnter Your Number :";
            cin>>numb;
            cout<<"\n**********************MENU*******************"<<endl;
            cout<<"\n1.chole kulcha"<<" \t\t\t\t\tRs.150/-";
            cout<<"\n2.chole bhature"<<"\t\t\t\t\tRS.120/-";
            cout<<"\n3.soft drink"<<"   \t\t\t\t\tRs.25/-";
            cout<<"\n4.papad"<<"        \t\t\t\t\tRs.35/-";
            cout<<"\n5.salad"<<"        \t\t\t\t\tRs.25/-";
            
            cout<<"\n      0. Confirm Your Order \n\n";
    }
    void customer()
    {
        cout<<"Your Name is :"<<name<<endl;
        cout<<"Your Mobile Number is :"<<numb<<endl;
    }
    int item1()
    {
        cout<<"~~~Enter Quantity~~~ :";
        cin>>qty[0];
        items[0]="\tchole kulcha                     Rs.150/-";
        amount[0]=qty[0]*150;
        return bill=bill+qty[0]*150;
    }
    int item2()
    {
        cout<<"~~~Enter Quantity~~~:";
        cin>>qty[1];
        items[1]="\tchole bhature        Rs.120/-";
        amount[1]=qty[1]*120;
        return bill=bill+qty[1]*120;
    }
    int item3()
    {
        cout<<"~~~Enter Quantity~~~:";
        cin>>qty[2];
        items[2]="\tsoft drink                   Rs.25/-";
        amount[2]=qty[2]*25;
        return bill=bill+qty[2]*25;
    }  
    int item4()
    {
        cout<<"~~~Enter Quantity~~~:";
        cin>>qty[3];
        items[3]="\tpapad                      Rs.35/-";
        amount[3]=qty[3]*35;
        return bill=bill+qty[3]*35;
    }
    int item5()
    {
        cout<<"~~~Enter Quantity~~~:";
        cin>>qty[4];
        items[4]="\tsalad                     Rs.25/-";
        amount[4]=qty[4]*25;
        return bill=bill+qty[4]*25;
    }    
    
    int Gross()
    {
        return grossbill=grossbill + bill;
    }
    int DISCOUNT()
    {
        if(grossbill>200)
        {
            return disc=(grossbill*10)/100;
        }
    }
    int CGST()
    {
        return cgst=(grossbill*2.50)/100;
    }
    int SGST()
    {
        return sgst=(grossbill*2.50)/100;
    }
    int displaygst()
    {
        return GST=cgst + sgst ;
    }
    int Net()
    {
        return netbill = grossbill - disc - GST;
    }
    void displayitems()
    {
        int i;
        for(i=0;i<10;i++)
        {
            if(!items[i].empty())
            {
                cout<<i+1<<"  : "<<items[i]<<"\t\t\t"<<qty[i]<<"\t\t\t"<<amount[i]<<"/-"<<endl;
            }
        }
    }
    void display()
    {
        cout<<"\n<===================================HOTEL WELLCOME==============================>";
        cout<<"\nCustomer Name                  :"<<name<<endl;
        cout<<"\nCustomer Mobile Number         :"<<numb<<endl;
        cout<<"\n*********************************OREDER LIST***********************************"<<endl;
        cout<<"\nNO\tITEMS\t\t\t\tRATE\t\t\t\tQUANTITY\t\tAMOUNT"<<endl;
        //displayitems();
    }

};
int main()
{
    bill x;
    int ch;
    x.menu();

    do{
        cout<<"Enter Your Choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
                x.item1();
                break;
            case 2:
                x.item2();
                break;
            case 3:
                x.item3();
                break;
            case 4:
                x.item4();
                break;
            case 5:
                x.item5();
                break;
            case 0:
                cout<<"Your order is confirmed .\n";
                break;
           
        }

    }while(ch != 0);
    x.display();
    x.displayitems();
    cout<<"\n==============================================================================="<<endl;
    cout<<"\t\t\t\t\t\t\t    Gross Bill :"<<x.Gross()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t    Discount   :"<<x.DISCOUNT()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t    CGST       :"<<x.CGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t    SGST       :"<<x.SGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t    GST        :"<<x.displaygst()<<"/-"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t    Net Bill   :"<<x.Net()<<"/-"<<endl;
    cout<<"================================================================================"<<endl;
    cout<<"\n\t\t\t~~~~~~~~~~~~THANK YOU . VISIT AGAIN . NICE DAY~~~~~~~~~~~~";
}  
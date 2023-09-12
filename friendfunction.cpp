#include<iostream>
using namespace std;
class test{
    int real,img;
    friend test add(test, test);
    public:
    void setdata(int a, int b){
        real = a, img = b;
    }
    void getdata()
    {
        cout<<"number is : "<<real<<" + "<<img<<"i"<<endl;
    }
};
test add(test x, test y){
    test z;
    z.real = x.real + y.real;
    z.img = x.img + y.img;
    return z;
}
int main()
{
    test t,s,p;
    t.setdata(2,3);
    t.getdata();
    s.setdata(5,6);
    s.getdata();

    p = add(t,s);
    p.getdata();
}
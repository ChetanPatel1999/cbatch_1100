#include<iostream>
using namespace std;
class demo
{
    int a,b;//non static(instance variable)
    static int c,d;// static(class varible)
    public:
    void setdata(int x,int y,int z,int z1)
    {
        a=x;
        b=y;
        c=z;
        d=z1;
    }
    void display()
    {
        cout<<"a ="<<a<<endl;
        cout<<"b ="<<b<<endl;
        cout<<"c ="<<c<<endl;
        cout<<"d ="<<d<<endl;
    }
};
int demo::c=0;
int demo::d=0;
int main()
{
 demo d1,d2,d3;
 d1.setdata(12,13,100,200);
 d2.setdata(14,15,300,400);
 d3.setdata(16,17,500,600);
 d1.display();
 d2.display();
 d3.display();

    return 0;
}
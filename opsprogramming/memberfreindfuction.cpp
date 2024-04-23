#include<iostream>
using namespace std;
class demo;
class demo2
{
    public:
    void display1(demo o1);  
    void display2(demo o1);
};
class demo
{
    int a,b;
    public:
   // friend void demo2::display1(demo);
    //friend void demo2::display2(demo);
    friend demo2;// we can make a class friend
    void setdata(int x,int y)
    {
     a=x;
     b=y;
    }
};
void demo2::display1(demo o1)
{
    cout<<"value of a : "<<o1.a<<endl; 
}
void demo2::display2(demo o1)
{
    cout<<"value of b : "<<o1.b<<endl; 
}
int main()
{
  demo d1;
  demo2 d2;
  d1.setdata(34,78);
  d2.display1(d1);
  d2.display2(d1);
 return 0;
}

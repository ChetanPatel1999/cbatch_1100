#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    friend void  display(demo);
    void setdata(int x)
    {
     a=x;
    }
};
void display(demo o1)
{
   cout<<"value of a : "<<o1.a<<endl; 
}
int main()
{
  demo d1;
  d1.setdata(34);
  display(d1);
 return 0;
}

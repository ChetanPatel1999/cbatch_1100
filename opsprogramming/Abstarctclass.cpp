//abstract class concept
#include<iostream>
using namespace std;
class base
{
    protected:
    int a,b;
    public:
    void setdata(int x,int y)
    {
      a=x;
      b=y;
    }
    void virtual display()=0;//pure vritual fuction

};
class derived :public base
{
public:
void display()
{
    cout<<"value of a = "<<a<<endl;
     cout<<"value of b = "<<b<<endl;
}
};
int main()
{
  derived d1;
  d1.setdata(34,67);
  d1.display();
  return 0;
}

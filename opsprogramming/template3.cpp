//template with default parameter parameter 
#include<iostream>
using namespace std;
template<class T1=int,class T2=int>
class demo
{
    T1 a;
    T2 b;
    public:
    void setdata(T1 x,T2 y)
    {
      a=x;
      b=y;
    }
    void display()// genric parameter
    {
        cout<<"value of a : "<<a<<endl;
        cout<<"value of b : "<<b<<endl;
    }
};
int main()
{
  demo<> d1;
  d1.setdata(12,56);
  d1.display();
  demo<string,int> d2;
  d2.setdata("chetan",89);
  d2.display();
  demo<float,int> d3;
  d3.setdata(12.45,56);
  d3.display();
  return 0;
}

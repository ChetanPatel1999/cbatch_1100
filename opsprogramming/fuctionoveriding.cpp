//fuction overiding
#include<iostream>
using namespace std;
class parent
{
 public :
 void m1(int a)
 {
    cout<<"base class method";
 }
};
class child:public parent
{
  public:
  void m1(int a)
  {
     cout<<"child class method";
  }
};
int main()
{
  child c1;
  c1.m1(12);
 return 0;
}

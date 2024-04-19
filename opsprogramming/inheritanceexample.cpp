#include<iostream>
using namespace std;
class A
{
    public:
    void m1()
    {
        cout<<"hi i am m1"<<endl;
    }
};
class B:public A
{
   public:
    void m2()
    {
        cout<<"hi i am m2"<<endl;
    } 
};
int main()
{
 B o1;
 o1.m2();
 o1.m1();
    return 0;
}
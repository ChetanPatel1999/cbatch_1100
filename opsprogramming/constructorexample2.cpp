#include<iostream>
using namespace std;
class demo
{
    int var1;
    int var2;
    public:
    demo()// no parametrized constructor
    {

    }
    demo(int a,int b)// paramiterized constructor
    {
        var1=a;
        var2=b;
    }
    void display()
    {
        cout<<"value of var1 = "<<var1<<endl;
        cout<<"value of var2 = "<<var2<<endl;
    }

};
int main()
{
 demo o1(12,34),o2(56,78);
 o1.display();
 o1.display();
 o1.display();
 o2.display();
 return 0;
}
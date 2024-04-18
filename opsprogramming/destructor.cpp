//copy constructor
#include<iostream>
using namespace std;
class demo
{
    int var1;
    int var2;
    public:
    demo(){}
    demo(int a,int b=13)
    {
        cout<<"costructor is called"<<endl;
        var1=a;
        var2=b;
    }
    ~demo()// destructor
    {
        cout<<"destructor is called"<<endl;
    }
    void display()
    {
        cout<<"value of var1 = "<<var1<<endl;
        cout<<"value of var2 = "<<var2<<endl;
    }

};
int main()
{
    
   {
   demo d1(12,34);
   d1.display();
   cout<<"end of main fuction"<<endl;
   }
   cout<<"outside block"<<endl;
   return 0; 
}
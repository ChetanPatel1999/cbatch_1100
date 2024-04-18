//copy constructor
#include<iostream>
using namespace std;
class demo
{
    int var1;
    int var2;
    public:
    demo(){}
    demo(int a,int b=13)// paramiterized constructor
    {
        var1=a;
        var2=b;
    }
    // copy constructor
    demo(demo & obj)
    {
     cout<<"copy constructor is called"<<endl;
       var1=obj.var1+5;  
       var2=obj.var2+5;   
    }
    void display()
    {
        cout<<"value of var1 = "<<var1<<endl;
        cout<<"value of var2 = "<<var2<<endl;
    }

};
int main()
{
   demo d1(12,34),d2(d1),d3;
   d3=d1;// internal copy constructor is called
   demo d5=d1;//external copy constaructor called
   d1.display();
   d2.display(); 
   d3.display();
   d5.display();
   return 0; 
}
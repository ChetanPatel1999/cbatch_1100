#include<iostream>
using namespace std;
    class parent
{
   protected:
   int a; 
   public:
   void setdata(int x)
   {
     a=x;
   }
};
class child:public parent
{
 public:
   void display()
   {
    cout<<"value of a :"<<a<<endl;
   }
};
int main()
{
 child o1;
 o1.setdata(45);
 o1.display();
 
 return 0;
}

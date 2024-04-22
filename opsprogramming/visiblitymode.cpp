#include<iostream>
using namespace std;
    class parent
{
   private :
   int b;
   protected:
   int a; 
   public:
   void setdata(int x)
   {
     a=x;
   }
};
class child:protected parent
{
 public:
   void display()
   {
     setdata(34);
    cout<<"value of a :"<<a<<endl;
   }
};
class child1:public child
{
 public :
 void fun()
 {
  setdata(34);
 }
};
int main()
{
 child o1;
 //o1.a=56;
 o1.display();
 
 return 0;
}

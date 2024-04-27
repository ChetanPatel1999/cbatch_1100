//ponter to derived class
#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    base(int x)
    {
        a=x;
    }
   void virtual display()
   {
    cout<<"base value of a :"<<a<<endl;
   }
};
class derived: public base
{
    int b;
    public:
    derived(int x,int y):base(x)
    {
        b=y;
    }
    void  display()
    {
     cout<<"derived value of a :"<<a<<endl;
     cout<<"derived value of b :"<<b<<endl;
    }
};
int main()
{
 /*derived *d=new derived(12,34);
 d->display();
 base *d1= new base(66);
 d1->display();*/
 base *b =new base(67);
 b->display();// base class diplay call
 b= new derived(77,88);
 b->display();// derived disply call 
 return 0;
}

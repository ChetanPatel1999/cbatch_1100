#include<iostream>
using namespace std;
class base
{
    int a,b;
    public:
    base()
    {
      cout<<"base - 0"<<endl;  
    }
    base(int x)
    {
      cout<<"base - 1"<<endl;  
    }
    base(int x,int y)
    {
      cout<<"base - 2"<<endl;  
    }
};
class d1 :public base
{
     int d;
     public:
     d1():base(12,45)
     {
        cout<<"d1 - 0"<<endl;
     }
      d1(int a):base(a)
     {

        cout<<"d1 - 1"<<endl;
     }
      d1(int b ,int c):base(b,c)
     {
        cout<<"d1 - 2"<<endl;
     }
};
int main()
{
 d1 b1(12,67);
    return 0;
}
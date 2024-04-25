#include<iostream>
using namespace std;
class base1
{
    int a,b;
    public:
    base1()
    {
      cout<<"base1 - 0"<<endl;  
    }
    base1(int x)
    {
      cout<<"base1 - 1"<<endl;  
    }
    base1(int x,int y)
    {
      cout<<"base1 - 2"<<endl;  
    }
};
class base2
{
    int a,b;
    public:
    base2()
    {
      cout<<"base2 - 0"<<endl;  
    }
    base2(int x)
    {
      cout<<"base2 - 1"<<endl;  
    }
    base2(int x,int y)
    {
      cout<<"base2 - 2"<<endl;  
    }
};
class d1 :public base2,public base1
{
     int d;
     public:
     d1():base1(12,45)
     {
        cout<<"d1 - 0"<<endl;
     }
      d1(int a):base2(a),base1(56,89)
     {

        cout<<"d1 - 1"<<endl;
     }
      d1(int b ,int c):base1(b,c)
     {
        cout<<"d1 - 2"<<endl;
     }
};
int main()
{
 d1 b1(12);
    return 0;
}
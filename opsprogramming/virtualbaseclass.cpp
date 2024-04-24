#include<iostream>
using namespace std;
class base
{
    public:
    void great()
    {
        cout<<"good morning"<<endl;
    }
};
class D1 :public virtual base
{
   //great() 
};
class D2 :public virtual base
{
   //great() 
};
class D3:public D1,public D2
{
     
};
int main()
{
 D3 o1;
 o1.great();
    return 0;
}
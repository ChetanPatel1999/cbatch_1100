#include<iostream>
using namespace std;
class base1
{
    public:
    void great()
    {
        cout<<"good morning"<<endl;
    }
};
class base2
{
    public:
    void great()
    {
        cout<<"good afternoon"<<endl;
    }
};
class derived:public base1,public base2
{
   public:
   void great()
   {
     base1::great();
     base2::great();
   }
    
};
int main()
{
 derived o1;
 o1.great();
    return 0;
}
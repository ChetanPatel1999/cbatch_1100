#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
    cout<<"zero argument constrctor"<<endl;
    }
    demo(int a)
   {
     cout<<"one argument constrctor"<<endl;
   }
   demo (int a,int b)
   {
     cout<<"two argument constrctor"<<endl;
   }
   demo(int a,int b,int c)
   {
    cout<<"three argument constrctor"<<endl;
   }
};
int main()
{
 demo o1,o2(45);
 
 return 0;
}
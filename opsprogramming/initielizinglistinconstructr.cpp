#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A(int x,int y):a(x+5),b(y)
    {
    }
    void display()
    {
        cout<<"value of a = "<<a<<endl;
        cout<<"value of b = "<<b<<endl;
    }
    
};
int main()
{
 A o1(12,4);
 o1.display();
    return 0;
}
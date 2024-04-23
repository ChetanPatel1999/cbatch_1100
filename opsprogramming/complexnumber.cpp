//friend fuction example
#include<iostream>
using namespace std;
class complex
{
    int real;
    int image;
    public:
    friend complex sum(complex c1,complex c2);
    complex(){}
    complex(int a,int b)
    {
        real=a;
        image=b;
    }
    void display()
    {
        cout<<"complex number : "<<real<<"+"<<image<<"i"<<endl;
    }
};
complex sum(complex c1,complex c2)
{
    complex o1;
    o1.real=c1.real+c2.real;
    o1.image=c1.image+c2.image;
    return o1;

}
int main()
{
  complex c1(12,5),c2(2,4),c3;
  c1.display();
  c2.display();
  c3=sum(c1,c2);//c3=o1;
  c3.display();
 return 0;
}

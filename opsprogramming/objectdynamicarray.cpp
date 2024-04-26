//dynamicaly object array
// arrow operator (->)
#include<iostream>
using namespace std;
class complex
{
    int real;
    int image;
    public:
    void setdata (int a,int b)
    {
        real=a;
        image=b;
    }
    void display()
    {
        cout<<"complex number : "<<real<<"+"<<image<<"i"<<endl;
    }
};
int main()
{
 /*complex c1;
 complex *ptr;
 ptr=&c1;
 //(*ptr).setdata(3,5);
 //(*ptr).display();
 ptr->setdata(3,5);
 ptr->display();*/
 /*complex *ptr;
 ptr=new complex;
 ptr->setdata(3,5);
 ptr->display();*/
 cout<<"size of compex : "<<(sizeof(complex))<<endl;
 complex *ptr=new complex[3];
 complex *temp=ptr;
 int i,a,b;
 cout<<"enter complex numbers : \n";
 for(i=0;i<3;i++)
 {
    cout<<"enter "<<i+1<<"complex real value : ";
    cin>>a;
    cout<<"enter "<<i+1<<"complex image value : ";
    cin>>b;
    ptr->setdata(a,b);
    ptr++;
 }
 ptr=temp;
 cout<<"display complex number : \n";
 for(i=0;i<3;i++)
 {
    ptr->display();
    ptr++;
 }
 ptr=temp;
 delete ptr;
 return 0;
}

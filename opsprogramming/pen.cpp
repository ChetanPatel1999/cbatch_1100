#include<iostream>
using namespace std;
class pen
{   
 string name;// data members
 int price;
 float rati;
 public:
 void setdata(string s,int a,float b);//declaration
 void display();
};
void pen::setdata(string s,int a,float b)//(:: scop resolution operator)
{
    name=s;
    price=a;
    rati=b;
}
void pen::display()
{
    cout<<"pen name = "<<name<<endl;
    cout<<"pen price = "<<price<<endl;
    cout<<"pen rate = "<<rati<<endl;
}
int main()
{
 pen p1,p2,p3;
 p1.setdata("cello",5,3.5);
 p1.display();
 p2.setdata("parker",512,5);
 p2.display();
 p3.setdata("goldex",10,4.5);
 p3.display();


    return 0;
}
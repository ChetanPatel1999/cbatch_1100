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
 pen p[5];
 int i,a,b;
 string s;

 for(i=0;i<5;i++)
 {
    cout<<"enter pen name :";
    cin>>s;
    cout<<"enter pen price :";
    cin>>a;
    cout<<"enter pen rating :";
    cin>>b;
    p[i].setdata(s,a,b);
    cin.ignore();
 }
 for(i=0;i<5;i++)
 {
    p[i].display();
 }



    return 0;
}
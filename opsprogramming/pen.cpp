#include<iostream>
using namespace std;
class pen
{   
 string name;// data members
 int price;
 float rati;
 static int acount;
 public:
 void setdata(string s,int a,float b);//declaration
 void display();
 static void astartname(pen obj[],int size)
 {
    int count=0,i;
     for(i=0;i<size;i++)
     {

      if(obj[i].name[0]=='a')
      {
        count++;
      }
     }
    cout<<"total pen name with start a : "<<count<<endl;
 }
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
int pen::acount=0;
int main()
{
 int n;
 cout<<"enter how many pens information you want store : ";
 cin>>n;   
 pen p[n];
 int i,a;
 float b;
 string s;

 for(i=0;i<n;i++)
 {
    cout<<"enter pen"<<i+1<<" name :";
    cin>>s;
    cout<<"enter pen"<<i+1<<" price :";
    cin>>a;
    cout<<"enter pen"<<i+1<<" rating :";
    cin>>b;
    p[i].setdata(s,a,b);
    cin.ignore();
 }
 for(i=0;i<n;i++)
 {
    p[i].display();
 }
 pen::astartname(p,n);

    return 0;
}
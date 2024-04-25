#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rno;
    string blood;
    student(string s1,int n,string s2)
    {
        name=s1;
        rno=n;
        blood=s2;
    }
    void stddisplay()
    {
        cout<<"name of student :"<<name<<endl;
        cout<<"rno of student : "<<rno<<endl;
        cout<<"blood group of student : "<<blood<<endl;
    }
   void  result(int per)
   {
    if(per>33)
    {
        cout<<"student pass "<<endl;
    }
    else{
        cout<<"student fail "<<endl;
    }
   }
};
class biostd :public student
{
 int bio;
 int science;
 int pysics;
 public:
   biostd(string s1,int n,string s2,int a,int b,int c):student(s1,n,s2)
    {
        bio=a;
        science=b;
        pysics=c;
    }
    void biodisplay()
    {
        stddisplay();
        cout<<"marks bio :"<<bio<<endl;
        cout<<"marks science : "<<science<<endl;
        cout<<"marks pysics : "<<pysics<<endl;
    }
};
class comstd :public student
{
 int account;
 int busines;
 int ip;
 public:
  comstd(string s1,int n,string s2,int a,int b,int c):student(s1,n,s2)
    {
        account=a;
        busines=b;
        ip=c;
    }
    void comdisplay()
    {
        stddisplay();
        cout<<"marks account :"<<account<<endl;
        cout<<"marks busines : "<<busines<<endl;
        cout<<"marks ip : "<<ip<<endl;
    }
    void  result(int per)
   {
    if(per>50)
    {
        cout<<"student pass "<<endl;
    }
    else{
        cout<<"student fail "<<endl;
    }
   }
};
int main()
{
    biostd s1("chetan",1001,"O+",56,78,90);
    comstd s2("aman",2001,"A+",45,67,89);
    cout<<"_________________________________________"<<endl;
    s1.biodisplay();
    s1.result(45);
    cout<<"_________________________________________"<<endl;
    s2.comdisplay();
    s2.result(56);
     cout<<"_________________________________________"<<endl;
    return 0;
}
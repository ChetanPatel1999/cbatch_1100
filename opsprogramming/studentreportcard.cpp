#include<iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    public:
    void setdata(string s,int r,float p)
    {
       name=s;
       rno=r;
       per=p; 
    }
    void printreportcard()
    {
        cout<<"reportcard of student ........."<<endl;
        cout<<"name of student : "<<name<<endl;
        cout<<"rno of student : "<<rno<<endl;
        cout<<"percentage of student : "<<per<<endl;
        if(per>33)
        {
            cout<<"student : Pass"<<endl;
        }
        else{
            cout<<"student : Fail"<<endl;
        }
        cout<<"_______________________________________"<<endl;
    }
    
};
int main()
{
 student s1,s2,s3;
 s1.setdata("chetan",1001,85);
 s2.setdata("amay",1002,32);
 s3.setdata("anuj",1003,99.99);
 s1.printreportcard();
 s2.printreportcard();
 s3.printreportcard();
    return 0;
}
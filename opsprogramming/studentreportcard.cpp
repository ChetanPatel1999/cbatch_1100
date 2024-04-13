#include<iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    static int totalpass;
    static int totalfail;
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
            totalpass++;
            cout<<"student : Pass"<<endl;
        }
        else{
            totalfail++;
            cout<<"student : Fail"<<endl;
        }
        cout<<"_______________________________________"<<endl;
    }
    void totalresult()
    {
        cout<<"total pass = "<<totalpass<<endl;
        cout<<"total fail = "<<totalfail<<endl;
        cout<<"______________________________________"<<endl;
    }
};
int student::totalpass=0;
int student::totalfail=0;
int main()
{
 student s1,s2,s3,s4;
 s1.setdata("chetan",1001,85);
 s2.setdata("amay",1002,32);
 s3.setdata("anuj",1003,99.99);
 s4.setdata("ayushi",1004,23);
 s1.printreportcard();
 s2.printreportcard();
 s3.printreportcard();
 s4.printreportcard();
 s1.totalresult();
 

    return 0;
}
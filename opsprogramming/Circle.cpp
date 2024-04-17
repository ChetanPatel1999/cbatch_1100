#include<iostream>
using namespace std;
class circle
{
    float radius;
    float area;
    float circumference;
    public:

    circle(float r)
    {
        radius=r;
    }
    void calculatearea()
    {
       area=3.141*radius*radius; 
       cout<<"area of circle which radius "<<radius<<" : "<<area<<endl;
    }
    void calculatecircumference()
    {
        circumference=2*3.141*radius;
        cout<<"circumference of circle which radius "<<radius<<" : "<<circumference<<endl;
    }
};
int main()
{
  float r;
  cout<<"enter radius of circle : ";
  cin>>r;
  circle c1(r);
  cout<<"enter radius of circle : ";
  cin>>r;
  circle c2(r);
  cout<<"enter radius of circle : ";
  cin>>r;
  circle c3(r);
  c1.calculatearea();
  c2.calculatearea();
  c3.calculatearea();
  c1.calculatecircumference();
  c2.calculatecircumference();
  c3.calculatecircumference();
    return 0;
}
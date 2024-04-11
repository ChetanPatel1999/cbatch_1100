#include<iostream>
using namespace std;
class circle
{
    float radius;
    float area;
    float circumference;
    public:
    void setradius(float r)
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
  circle c1,c2,c3;
  float r;
  cout<<"enter radius of circle : ";
  cin>>r;
  c1.setradius(r);
  cout<<"enter radius of circle : ";
  cin>>r;
  c2.setradius(r);
  cout<<"enter radius of circle : ";
  cin>>r;
  c3.setradius(r);
  c1.calculatearea();
  c2.calculatearea();
  c3.calculatearea();
  c1.calculatecircumference();
  c2.calculatecircumference();
  c3.calculatecircumference();
    return 0;
}
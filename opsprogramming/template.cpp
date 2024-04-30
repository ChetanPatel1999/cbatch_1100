//template class /genric class
#include<iostream>
using namespace std;
template<class T>
class demo
{
    public:
    void display(T a)// genric parameter
    {
        cout<<"value of a : "<<a<<endl;
    }
};
int main()
{
  demo<int> d1;
  d1.display(12);
  demo<string> d2;
  d2.display("chetan");
  demo<float> d3;
  d3.display(12.45);
  demo<char> d4;
  d4.display('A');
  return 0;
}

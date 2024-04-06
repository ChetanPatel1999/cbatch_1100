// wap to print day name according to number.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a num ";
    cin>>num;
    switch(num)
    {
        case 1:cout<<"monday";break;
        case 2:cout<<"tuesday";break;
        case 3:cout<<"wednesday";break;
        case 4:cout<<"thursday";break;
        case 5:cout<<"friday";break;
        case 6:cout<<"saturday";break;
        case 7:cout<<"sunday";break;
        default:cout<<"please enter num 1 to 7";
    }
    return 0;
}
#include <iostream>

using namespace std;

class construct{
public:
    int num1,num2,num3,num4;
    construct()
    {
        num1=80;
        num2=20;
        num3=51;
        num4=50;
    }

};
int main()
{
construct c;
cout<<"Value of first number: "<<c.num1<<endl;
cout<<"Value of second number: "<<c.num2<<endl;
cout<<"Value of third number: "<<c.num3<<endl;
cout<<"Value of fourth number: "<<c.num4<<endl;
    return 0;
}

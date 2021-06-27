#include <iostream>

using namespace std;

void display(int a,int b)
{

    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
}
void display(int c)
{
    cout<<"Value of c: "<<c<<endl;
}
int main()
{
int a=1,b=2,c=3;
display(a,b);
display(c);
    return 0;
}

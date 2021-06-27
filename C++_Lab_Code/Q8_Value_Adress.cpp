#include <iostream>

using namespace std;

int main()
{
   int a,*b,c;
   cout<<"Enter a number: ";
   cin>>a;
   b=&a;
   cout<<"Entered number : "<<a;
   cout<<"\n Address of the entered number : "<<b<<"\n";
   cout<<"Change the existing value of entered number: ";
   cin>>c;
   *b=c;
   cout<<"Value return after the change :"<<a;

    return 0;
}

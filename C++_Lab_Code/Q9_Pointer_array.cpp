#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int n,i,j,temp;
    cout <<"Enter the size of the arrary:"<< endl;
    cin>>n;
    cout<<"Enter the Arrary elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i = 0; i < n - 1; i++)
   {
      for (j = i + 1; j < n; j++)
      {
          if (a[j] < a[i])
          {
              temp = a[i];
              a[i] = a[j];
              a[j] = temp;
          }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

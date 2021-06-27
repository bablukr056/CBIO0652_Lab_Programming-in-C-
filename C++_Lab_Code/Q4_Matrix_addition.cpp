#include <iostream>

using namespace std;

int main()

{
    int a[100],b[100],n,sum[100];
    cout<<"Enter size of the matrices: ";
    cin>>n;
    cout<<"Enter matrix A: ";
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"Enter matrix B: ";
    for(int i=0;i<n;i++)
    {

        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {

        sum[i]=a[i]+b[i];
    }
    cout<<"Sum of matrices A and B is : ";
     for(int i=0;i<n;i++)
    {

        cout<<sum[i];
        cout<<"\n";
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,arr[100];
    cout<<"Enter a size of an array: ";
    cin>>num;
    cout<<"Enter an array: "<<"\n";
    for(int i=0;i<num;i++)
    {
    cin>>arr[i];
    }

    sort(arr,arr+num);
    cout<<"Sorted order"<<"\n";
for(int i=0;i<num;i++)
{
cout<<arr[i];
cout<<"\n";
}
    return 0;
}

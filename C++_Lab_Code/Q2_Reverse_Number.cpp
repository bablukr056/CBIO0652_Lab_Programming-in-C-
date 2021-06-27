#include <iostream>
using namespace std;

void result(int N)
{

	for (int num = N; num >=0; --num)
	{
		if (num % 3 == 0)
			cout << num << " ";
	}
}


int main()
{
    int N=0;
    cout<<"Enter the number: ";
	cin>>N;

	result(N);
	return 0;
}

// No. occuring odd number of times
#include <iostream>
#include <stdio.h>

using namespace std;

int getOddNumber(int a[], int size)
{
	int result = 0;
	for(int i = 0; i < size; i++)
	{
		result = result ^ a[i];
	}
	return result;
}

int main()
{
	int a[] = {1,2,2,3,3,4,4,1, 9, 9, 9};
	cout<<"The number occuring odd no. of times is: "<<getOddNumber(a, 11);
}
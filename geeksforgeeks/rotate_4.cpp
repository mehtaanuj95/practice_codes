#include <stdio.h>
#include <iostream>

using namespace std;

void printarray(int a[], int n)
{
	for(int i = 0; i < n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int d = 2,n = 7, temp = 0;
	//reverse a
	int size = d;
	for(int i = 0; i <= (size-1)/2; i++)
	{
		temp = a[i];
		a[i] = a[size-1-i];
		a[size-1-i] = temp;
	}
	printarray(a, n);
	//reverse b
	int count = 0;
	for(int i = size;i < (n-d); i++)
	{
		temp = a[i];
		a[i] = a[n-1 - count];
		a[n-1-count] = temp;
		count++;
	}                      
	printarray(a, n);
	//reverse ab
	for(int i = 0; i <= n/2; i++)
	{
		temp = a[i];
		a[i] = a[n-1-i];
		a[n-i-1] = temp;
	}
	printarray(a, n);
	cout<<endl;
	return 0;
}
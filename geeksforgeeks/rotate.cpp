#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = 7, temp = 0;
	for(int i = 0; i < n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(int i = 0; i <= n/2;i++)
	{
		//swap two elements
		temp = a[i];
		a[i] = a[n-1-i];
		a[n-i-1] = temp;
	}
	for(int i = 0; i < n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
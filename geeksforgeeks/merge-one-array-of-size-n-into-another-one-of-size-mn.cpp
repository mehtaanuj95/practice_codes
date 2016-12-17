#include <stdio.h>
#include <iostream>
#define NA -1

using namespace std;

void transfertoend(int a[], int N[], int m, int n)
{
	int size = m+n-1;
	int count = size;

	for(int i = size; i >=0; i--)
	{
		if(a[i] != NA)
		{
			a[count] = a[i];
			count--;
		}
	}
}
void printarray(int a[], int N[], int m, int n )
{
	for(int i = 0; i < m+n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void merge(int a[], int N[], int m, int n )
{
	int i = n;
	int j = 0; 
	int k = 0;
	while(k < m+n)
	{
		if(i < m+n && a[i] < N[j])
		{
			a[k] = a[i];
			i++;
			k++;
		}
		else
		{
			a[k] = N[j];
			k++;
			j++;
		}
	}
}
int main()
{
	int a[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
 	int N[] = {5, 7, 9, 25};
  	int n = sizeof(N)/sizeof(N[0]);
  	int m = sizeof(a)/sizeof(a[0]) - n;
  	
  	//transfer all the elements to the end
  	transfertoend(a, N, m, n);
  	printarray(a, N, m, n);
  	//merge both arrays
  	merge(a, N, m, n);
  	printarray(a, N, m, n);
  	return 0;
}
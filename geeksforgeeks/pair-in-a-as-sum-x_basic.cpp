#include <iostream>
#include <stdio.h>

using namespace std;

void findequal(int a[], int n, int sum)
{
	int lower = 0;
	int higher = n-1;
	while(lower < higher)
	{
		if(a[lower] + a[higher] == sum)
		{	
			cout<<" { "<<a[lower]<<" , "<<a[higher]<<" } "<<endl;
			lower++;
		}
		else if(a[lower] + a[higher] < sum)
			lower++;
		else
			higher--;
	}

}
int main()
{
	int a[] = {8,7,6,5,4,3,2,1};
	int num = 7, n = 8, temp;
	// sorting an array
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n-1; j++)
		{
			if(a[j+1] < a[j])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	findequal(a, n, num);
	/*
	// checking for pair equal to sum
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] + a[j] == num)
			{
				cout<<" { "<<a[i]<<" , "<<a[j]<<" } ";
			}
		}
	}
	*/
	cout<<endl;
	
	return 0;
}
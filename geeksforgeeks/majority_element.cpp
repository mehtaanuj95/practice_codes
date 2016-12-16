// Find the majority element
//A majority element is an eleemnt which appears more than n/2 times.
#include <iostream>
#include <stdio.h>

using namespace std;
int majority_optimised(int a[], int size)
{
	int count = 1, maj_index = 0;
	for(int i = 1; i < size; i++)
	{
		if(a[maj_index] == a[i])
		{
			count++;
		}
		else
			count--;
		if(count == 0)
		{
			maj_index = i;
			count = 1;
		}
	}
	cout<<a[maj_index]<<endl;
	return a[maj_index];
}
void isMajority(int num, int a[], int size)
{
	int count = 0;
	for(int i = 0; i < size; i++)
	{
		cout<<a[i]<<" ";
		if(a[i] == num)
			count++;
	}
	cout<<endl<<"count - "<<count;
	if(count > size/2)
		cout<<"Yes : "<<num<<endl;
	else
		cout<<"No"<<endl;
}
void majority(int a[], int size)
{
	int b[1000] = {0};
	int flag = 0;
	for(int i = 0; i < size; i++)
	{
		b[a[i]]++;
	}
	for(int i = 0; i < 1000; i++)
	{
		if(b[i] > size / 2)
		{
			cout<<i;
			flag++;
		}
	}
	if(! flag)	
		cout<<"None"<<endl;
	cout<<endl;
}
int main()
{
	int a[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
	//majority(a, 8);
	isMajority(majority_optimised(a, 9), a, 9);
}
#include <iostream>
#include <stdio.h>
#define MAX 10000

using namespace std;


int main()
{
	int a[] = {8,7,6,5,4,3,2,1};
	int sum = 7, n = 8, temp;
	
	bool hash[MAX] = {0};
	for(int i = 0; i < n; i++)
	{
		temp = sum - a[i];
		if(temp >0 && hash[temp] == 1)
		{
			cout<<" { "<<a[i]<<" , "<<temp<<" } "<<endl;
		}
		hash[a[i]] = 1;
	}
	cout<<endl;
	
	return 0;
}
#include <iostream>
#include <stdio.h>
#define MAX 10000

using namespace std;


int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
	
	int maxendinghere = 0;
	int maxsofar = 0;

	for(int i = 0; i < n; i++)
	{
		maxendinghere = maxendinghere + a[i];
		if(maxendinghere < 0)
			maxendinghere = 0;
		if(maxendinghere > maxsofar)
			maxsofar = maxendinghere;
	}
	cout<<"Greatest Sum is : "<<maxsofar<<endl;
	
	cout<<endl;
	
	return 0;
}
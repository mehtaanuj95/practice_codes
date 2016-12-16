#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int x1 = 1, x2;
	int a[] = {1,2,3,5,6,7,8};
	int n = 7;
	for(int i = 2; i <= n+1; i++)
	{
		x1 = x1 ^ i;
	}
	printf("%d\n", x1);
	x2 = a[0];
	for(int i = 1; i < n; i++)
	{
		x2 = x2 ^ a[i];
	}
	printf("%d\n", x2);
	printf("Missing number is : %d\n", x1^x2);
	return 0;
}
// A Dynamic Programming solution for subset sum problem
#include <stdio.h>
#include <iostream>
using namespace std;
 
// Returns true if there is a subset of set[] with sun equal to given sum
void isSubsetSum(int set[], int n, int sum)
{
    // The value of subset[i][j] will be true if there is a 
    // subset of set[0..j-1] with sum equal to i
    bool subset[n+1][sum+1];
    // If sum is 0, then answer is true
    for (int i = 0; i <= n; i++)
      subset[i][0] = true;
    // If sum is not 0 and set is empty, then answer is false
    for (int i = 1; i <= sum; i++)
      subset[0][i] = false;
     // Fill the subset table in botton up manner
     for (int i = 1; i <= n; i++)
     {
       for (int j = 1; j <= sum; j++)
       {
         subset[i][j] = subset[i-1][j];
         if (j >= set[i-1])
           subset[i][j] = subset[i][j] || subset[i-1][j-set[i-1]];
       }
     }
 
     // uncomment this code to print table
     /*for (int i = 0; i <= n; i++)
     {
       for (int j = 0; j <= sum; j++)
          printf ("%4d", subset[i][j]);
       printf("\n");
     } */
     if(subset[n][sum] == true)
     {
          printf("Found a subset with given sum\n");
         int s[100];
         int index = 0;
         int i = n, j = sum;
         while(i > 0 && j > 0)
          {
            cout<<subset[i][j]<<"  "<<subset[i-1][j]<<"  "<<set[i-1]<<endl;
            if(subset[i-1][j] != true)
            {
              s[index] = set[i-1];
              i--;
              j=j-set[i-1]-1;
              index++;
            }
            else
            {
              i--;
            }
          }

          for(int z = 0;z<index;z++)
          {
            cout<<s[z]<<" ";
          }
          cout<<endl;
     } 
     else
     {
        cout<<"No subset with given sum"<<endl;
     }
}
 
// Driver program to test above function
int main()
{
  int set[] = {2, 3, 7, 8, 10};
  int sum = 14;
  int n = sizeof(set)/sizeof(set[0]);
  isSubsetSum(set, n, sum);
  return 0;
}
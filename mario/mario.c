///строим пирамиду
#include<cs50.h>
#include<stdio.h>
int main()
{
     int n = get_int("Height:");
  for(int k = 1; k <= n; k++)
  {
      for(int m = 0; m < n - k; m++)
  {
      printf(" ");
  }
  for(int L = 1; L <= k; L++)
  {
      printf("#");

  }
   printf("\n");
  }
 }
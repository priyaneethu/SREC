#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n],i,sum=0;
   for(i = 0;  i< n ; i++)
      scanf("%d",&arr[i]);

   for( i = 0; i < n ; i++)
      sum += arr[i];

   for( i = 0 ; i < n ; i++)
       arr[i] = sum - arr[i];


   for( i = 0; i < n ; i++)
      printf("%d ", arr[i]);
}

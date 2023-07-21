#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n],i,sum=0;
   for(i = 0;  i< n ; i++)
      scanf("%d",&arr[i]);
   int max;
   max = arr[0];
   for( i = 1 ; i < n ; i++)
      if( max < arr[i])
         max = arr[i];
   printf("%d",max);
}

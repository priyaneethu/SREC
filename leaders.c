#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n+1],i;
   for(i = 0;  i< n ; i++)
      scanf("%d",&arr[i]);
   int count = 1 , max = arr[0];
   for( i = 1; i < n ; i++)
     if( max < arr[i])
     {
        max = arr[i];
         count++;
     }
  printf("%d",count);
}

#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int arr[n];
   int i;
   for( i = 0 ; i < n ; i++)
      scanf("%d",&arr[i]);


   // forward traversal
   for( i =0 ; i < n ; i++)
       printf("%d ", arr[i]);

   printf("\n");
   for( i = n-1; i>= 0; i--)
      printf("%d ", arr[i]);


}

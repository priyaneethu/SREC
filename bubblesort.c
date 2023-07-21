#include<stdio.h>
void swap( int *p1 , int *p2)
{
   int temp;
   temp = *p1;
   *p1 = *p2;
   *p2 = temp;
}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n],i,j,flag=0,k;
   for(i = 0;  i< n ; i++)
      scanf("%d",&arr[i]);

  for( k = 0; k < n ; k++)
  {
   printf("Process: %d\n", k);
   flag = 0;
   for( i = 0 ; i < n-1-k ; i++)
   {
      if( arr[i] > arr[i+1])
      {
         swap( &arr[i] , &arr[i+1]);
         flag=1;
      }

      for( j = 0; j < n; j++)
         printf("%d ", arr[j]);
      printf("\n");
   }
   if( flag == 0) break;
  }


}

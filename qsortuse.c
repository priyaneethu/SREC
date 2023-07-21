#include<stdio.h>
int cmp( void * p1 , void * p2)
{
   int  n1 , n2;
   n1 =*(int*)p1;
   n2 = *(int*)p2;
   //return n1-n2;
   if( n1 > n2)
      return 1;
   else return 0;
}
int main()
{
  int arr[] = {56,23,12,58,32};
  int n= 5,i;
  qsort(arr,n,sizeof(int), cmp);
  for( i = 0; i < n ; i++)
    printf("%d ", arr[i]);
}

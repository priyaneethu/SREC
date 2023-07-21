#include<stdio.h>
int * copyArray( int n , int arr[])
{
   int *copy;
   int i;
   copy = (int*)malloc(n*sizeof(int));
   for( i = 0 ;  i < n ;i++)
      copy[i]= arr[i];
   return copy;
}
int main()
{
   int arr[]= {10,20,30,40,50};
   int n = 5;
   int * ptr;
   ptr = copyArray(n, arr);
   int i;
   for( i = 0 ; i < n ; i++)
      printf("%d ", ptr[i]);
}

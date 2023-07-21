#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n+1],i,sum=0;
   for(i = 0;  i< n ; i++)
      scanf("%d",&arr[i]);
   int  val;
   scanf("%d",&val);
   for( i = 0 ;i < n ; i++)
     if( arr[i] == val)
       break;
   for( ; i < n-1 ; i++)
     arr[i] = arr[i+1];
   n--;
   for( i = 0 ; i < n ; i++)
     printf("%d ", arr[i]);

}

#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n-1],i,sum=0 , sum1=0;
   for(i = 0;  i< n-1 ; i++)
      scanf("%d",&arr[i]);

   sum = n * (n+1)/2;

   for( i = 0 ; i < n-1; i++)
      sum1 = sum1+arr[i];

   printf("%d",sum-sum1);

  }

#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n+1],i,sum=0;
   for(i = 0;  i< n ; i++)
      scanf("%d",&arr[i]);
   int pos, val;
   scanf("%d %d",&pos,&val);

   for( i = n; i > pos ; i--)
      arr[i] = arr[i-1];
   arr[pos] = val;

   for( i = 0; i <= n ; i++)
      printf("%d ", arr[i]);
}

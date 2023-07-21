#include<stdio.h>
int main()
{
   int row , col, val = 1,count = 0, n;
   n = 10;
   for( row = 1 ; ; row++,val--)
   {
      for( col = 1 ; col <= row ; col++)
      {
         printf("%d ", val);
         val+=2;
         count++;
         if( count == n)
            break;
      }
      if( count == n)
          break;
   }

}

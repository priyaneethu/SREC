#include<stdio.h>
int main()
{
   int a=10, b=0 , c=5;
   if( a++||b--||c++)
      printf("%d %d %d",a,b,c);
   else
   printf("%d %d %d",a,b,c);
}

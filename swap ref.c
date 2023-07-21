#include<stdio.h>
void swap( int * p1 , int * p2)
{
   int temp;
   temp = *p1;
   *p1 = *p2;
   *p2 = temp;
}
int main()
{
   int n1 = 10 , n2 =20;
   printf("%d %d\n", n1,n2);
   swap(&n1,&n2);
   printf("%d %d\n",n1,n2);
}

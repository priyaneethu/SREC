#include<stdio.h>
#include<stdlib.h>
int main()
{
  int * ptr;
  ptr = (int *)calloc(5,sizeof(int));
  int i;
  for( i = 0 ; i < 5 ; i++)
     printf("%d ", ptr[i]);

}

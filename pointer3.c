#include<stdio.h>
int main()
{
  int num = 10;
  int * ptr = &num;
  printf("%u\n",ptr);
  printf("%d\n",*ptr++);
  printf("%u\n",ptr);

}

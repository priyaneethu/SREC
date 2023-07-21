#include<stdio.h>
int main()
{
  int num =10;
  char ch = 'A';
  float f = 12.34;
  void *ptr = &ch;
  printf("%c %c\n", ch, *(char*)ptr);
  ptr=  &num;
  printf("%d %d\n", num, *(int*)ptr);
  ptr = &f;
  printf("%f %f", f, *(float*)ptr);




}

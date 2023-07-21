#include<stdio.h>
int strLen(char * str)
{
    int i ;
   for( i = 0  ; str[i] != 0 ; i++);
   return i;
}
int main()
{
   char str[101];

  scanf("%[^\n]s",str);

  printf("%s\n",str);
  printf("%d ", strLen(str));
}

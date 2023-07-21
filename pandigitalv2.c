#include<stdio.h>
int main()
{
   long long int num= 125720698LL;
   int res = 0, dig;
  while(num > 0){
   dig = num % 10;
   res = res | (1<<dig);
   num = num/10;
  }
   if (res == 1023) //res == 1023
      printf("Pandigital");
   else
    printf("Not pandigital");
}

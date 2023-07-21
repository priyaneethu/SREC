#include<stdio.h>

int baseConversion(int num , int fromBase , int toBase)
{
    int res= 0, rem , power=1;
       while( num > 0)
   {
      rem = num % toBase;
      res =  res + rem*power;
      power = power* fromBase;
      num = num / toBase;

   }
   return res;
}
int main()
{
   int n1,n2,fb1,fb2,rb;
   scanf("%d %d %d %d %d", &n1,&n2,&fb1,&fb2,&rb);
   int res = baseConversion(n1,fb1,10) + baseConversion(n2,fb2,10);
   res = baseConversion(res,10,rb);
   printf("%d",res);
}

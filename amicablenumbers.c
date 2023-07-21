#include<stdio.h>
//returntype funname()
int sumOfFactors( int num)
{
     int sqt,i,sof=1;
    sqt = sqrt(num);
for( i = 2 ; i <= sqt ; i++)
   if( num % i == 0)
      sof = sof + i + num/i;
return sof;

}
int main()
{
int num1,num2 , i , sof1 = 1 ,sof2=1, sqt;
num1 = 221;
num2 = 284;
 sof1 = sumOfFactors(num1);
 sof2= sumOfFactors(num2);

if( num1 == sof2 && num2 == sof1)
   printf("Yes");
else
   printf("No");
}

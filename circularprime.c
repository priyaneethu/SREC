#include<math.h>
#include<stdio.h>
#include<stdbool.h>
#include "myheader.h"
int isPrime( int num)
{
    if( num <=1) return false;
  int factor , sqt;
  sqt = sqrt(num);
  for( factor = 2 ; factor<= sqt ; factor++)
  {
     if( num % factor == 0)
     return false;

  }
   return true;
}
int main()
{

    int num=191; //9311 1931 1193 3119
    int temp=num;
    int nod = findNoOfDigits(num);
    int divisor = findDivisor(nod);
    while( isPrime(num) == true)
    {
        num = (num%10)*divisor + (num/10);
        if( num ==temp)break;
    }
    if(num==temp)
         printf("Yes");
    else
        printf("No");

}

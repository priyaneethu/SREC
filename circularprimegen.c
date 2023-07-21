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

    int num=23,temp,nod,divisor; //9311 1931 1193 3119
     int count;
 for( num = 10 ; num <= 10000 ; num++)
    {
     temp=num;
     nod = findNoOfDigits(num);
     divisor = findDivisor(nod);
     count = 1;
    while( isPrime(num) == true)
    {
        num = (num%10)*divisor + (num/10);
        if(count > nod) break;
        count++;
    }
    if(count > nod)
         printf("%d ", temp);
    num = temp;
    }

}

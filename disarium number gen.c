#include<stdio.h>
int findNoOfDigits(int num )
{
   int count = 0;
   while( num >0)
   {
      num=num/10;
      count++;
   }
   return count;
}
/*12345 -> 1
12345/10000->1
345/100 -> 3
45/10 -> 4*/
int findDivisor(  int nod )
{
    int i , divisor = 1;
    for( i = 1; i < nod; i++)
         divisor = divisor*10;
    return divisor;
}
int findPower( int base , int expo)
{
    int res = 1 , i;
    for( i = 1 ; i<= expo ; i++)
          res = res * base;
    return res;
}
int main()
{
   int num =89, nod , divisor , sum = 0,power;
   int temp = num,dig;
   int st=1,end=1000;

 for( num = st ; num <= end;num++)
 {
   sum = 0;
   temp = num;
   nod = findNoOfDigits(num);
   divisor = findDivisor(nod);
   int pos =1;
  while( num ) // 0!=0
  {
   dig = num / divisor; //35/10 -> 5/1->5
   power = findPower(dig,pos);// 5,3->125
   sum = sum + power;  //0+1->1+9->10+125->135
   num = num % divisor; //135%100-> 35%10->5%1->0
   divisor = divisor/10;// 100/10->10/10->1->1/10-0
   pos++;// 2 3 4
  }
  if( sum == temp)
      printf("%d ", temp);
  num = temp;
 }
}

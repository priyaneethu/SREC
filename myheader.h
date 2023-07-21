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

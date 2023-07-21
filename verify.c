#include<stdio.h>
int main()
{
   //int num,a,b,c;
   //scanf("%d %d %d%n",&a,&b,&c,&num);
   char str[100],str1[100];
   //scanf("%[^a-zA-Z]s",str);
   scanf("%[^\n]s%[^\n] ",str,str1);
   printf("%s %s",str,str1);

}

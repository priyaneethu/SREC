#include<stdio.h>
void a()
{
    /*extern un_num;
   // printf("%d %u\n" , m_num , &m_num);
   printf("%d %u\n",un_num,&un_num);*/
   static int snum=10;
   int lnum =100;
   printf("%d %d\n",lnum,snum);
   lnum++;
   snum++;

}
int un_num;
int main()
{
   int m_num;
   a();
   a();
   a();
  /* printf("%d %u\n" , m_num , &m_num);
   printf("%d %u\n",un_num,&un_num);*/
}

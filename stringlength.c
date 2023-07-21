#include<stdio.h>
int strLen(char  *str)
{
 int i;
  for( i = 0 ; str[i]!= 0; i++);
  return i;


}
char * strCpy(char *des , const char* src )
  {
    int i;
     for( i = 0 ; src[i]!= 0 ; i++)
          des[i] = src[i];
     des[i]= 0;
   return des;

 /*   char * temp=des;
    while(*des++=*src++);
    return temp;*/
  }
char *strCat( char * des , const char* src)
{
    strCpy( des+strLen(des) , src);
    return des;
}
int strCmp( const char* s1 , const char * s2 )
{
    int i;
    for(i = 0; s1[i]!= 0 && s2[i]!= 0; i++)
    {
        if( s1[i] != s2[i])
            return s1[i]-s2[i];

    }
    return s1[i]-s2[i];

}

strRev(char * str)
{
    int first,last;
    char temp;
    first = 0;
    last = strLen(str)-1;
   while(first < last){
    temp = str[first];
    str[first] =str[last];
    str[last] = temp;
    first++;
    last--;
   }

}

int wordCount(char *str)
{
    int count =0,i;
    for(  i = 0 ; str[i] !=0 ; i++)
        if( str[i] ==' ')
           count++;
    return count+1;

}
removeWhiteSpaces( char *str)
{
    int i,j,spaceFlag=0;
    i =0 ;
    j =0 ;
    while(  str[j]!= 0 ){
    if( str[j] != ' ')
    {
       str[i] = str[j];
       i++;
       j++;
       spaceFlag=0;
    }
    else{

        if( spaceFlag==0 && j!=0)
        str[i++]= ' ';
         j++;
        spaceFlag++;

    }
    }
  str[i] =0;

}
int main()
{
   char str1[101]="this    is     a test     sentence   ",str2[101]="world";
  // scanf("%[^\n]s",str1); // hello
 //  printf("%d",strLen(str));
  // printf("%s",strCat(str1,str2));
 // printf("%d",strCmp("Helao","Hel"));
// strRev(str1);
  removeWhiteSpaces(str1);
  printf("%s",str1);
}

#include<stdlib.h>
#include<stdio.h>
int main()
{
   unsigned int val;
   char v = val;
   printf("enter the input val:");
   scanf("%d",&val);
   if(val>=48 && val<=59)
   {
     printf("The value of val is %c",val);
   }
   else if(val>=65 && val<=90)
   {
      printf("the value of val is uppercase %c ",val);
   }
  else if(val>=97&& val<=122)
  {
       printf("the value of val is Lowercase %c ",val);
  }
  else
  {
      printf("The value of val is special charecter %c",val);
  }
}


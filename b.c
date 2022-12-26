#include<stdio.h>
int main()
{
  int b[] ={0,20,0,40,5};
  int i,*k;
  k=b;//stores the adress of array.
  for(i=0;i<=4;i++)
  {
   printf("\n%d",*k);
   k++;
  }
}

#include<stdio.h>
//#include<stdlib.>
#define key 64
int main()
{
    int num,pos,i=0;
    printf("Enter the Number:\n");
    scanf("%d",&num);
    printf("Enter the Input Position Number:\n");
    scanf("%d",&pos);
    for(i=7;i>=0;i--)
        printf("%d",(num>>i)&1);
        printf("\n");
        int temp1 = num<<pos;
        int temp2 = num>>pos;
        int swap =  temp1|temp2;
        swap =swap|num;
        num =num^key;
    for(i=7;i>=0;i--)
      printf("%d\t",(num>>i)&1);
         return 0;
}

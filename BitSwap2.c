#include<stdio.h>
int main()
{
unsigned int num,pos=9;
printf("Enter the the number :");
scanf("%d",&num);
for(int i=pos;i>=0;i--)
printf("%d",(num>>i)&1);
printf("\n");
int temp = num&(1<<pos);
for(int i = pos;i>=0;i--)
printf("%d",(temp>>i)&1);
printf("\n");
temp=temp|(3<<8); //second bit position change
int temp1 = num|(1<<2);
for(int i = pos;i>=0;i--)
printf("%d",(temp1>>i)&1);
printf("\n");
temp1 = temp1^(1<<1);//second bit position change
num = temp^temp1;
for(int i = pos;i>=0;i--)
printf("%d",(num>>i)&1);
return 0;
}

#include<stdio.h>
void insertionsort(int arr[],int n)
{
  int i,key,j;
  for(i=0;i<n;i++) //The Outer For loop used to create
  {
     key =arr[i];//storing the values in Key
     j=i-1;
     while(j>=0 && arr[j]>key)
     {
       arr[j+1] = arr[j];
       j = j-1;
     }
     arr[j+1] = key;
  }
}
void print_Arr(int arr[],int n)
{
  for(int i =0;i<n;i++)
  printf("%d\t",arr[i]);
}
int main()
{
  int i,Size = 0;
  printf("enter the Size of array:");
  scanf("%d",&Size); //creatign the size for the Array from User
  int arr[Size];
  for(i =0;i<Size;i++)
  scanf("%d",&arr[i]);  // Reading the array value
  printf("%d\t",arr[i]);
  int n = sizeof(arr) / sizeof(arr[0]); //creating the Size of Individual Array element
  insertionsort(arr,n);//Calling the Insertion Function
  print_Arr(arr,n);//Calling the Functio to Print Array after insertng
}

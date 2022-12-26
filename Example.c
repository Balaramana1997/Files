#include<stdio.h>
func()
{
    static int count=0;
    if(count<50)
    {
        count++;
        printf("count=%d brigosha\n",count);
        func();
    }
}
int main()
{
    func();
}

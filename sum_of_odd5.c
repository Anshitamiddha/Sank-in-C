#include<stdio.h>
int main()
{
    int a=1,i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum+=a;
        a=(2*i)+1;
    }
    printf("Sum is %d",sum);
    return 0;
}
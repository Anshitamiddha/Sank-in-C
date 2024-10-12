#include<stdio.h>
int main()
{
    int a,n,sum=0;
    for(n=2;n<=6;n++)
    {
        a=(2*n)-2;
        sum+=a;
        n++;
    }
    /*int a,n,sum;
    for(n=0;n<=4;n++)
    {
        a= (2*n)+2;
        sum+=a;
    }
    printf("sum is %d",sum);*/
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,sum,sub,mil,divi;
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mil=a*b;
    divi=(a*0.2)/b;
    printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%d",a,b,sum,a,b,sub,a,b,mil,a,b,divi);
    return 0;
}
#include<stdio.h>>
int main()
{
    int a,b,sum,sub,mul,divi,mot;
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("sum=%d+%d=%d\n",a,b,sum);
    sub=a-b;
    printf("sub=%d-%d=%d\n",a,b,sub);
    mul=a*b;
    printf("mul=%d*%d=%d\n",a,b,mul);
    divi= a/b;
    printf("divi=%d/%d=%d\n",a,b,divi);
    mot=a%b;
    printf("mot=%d mol %d=%d",a,b,mot);

    return 0;
}
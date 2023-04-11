#include<stdio.h>
int main()
{

    int x ,and;
    scanf("%d",&x);
    and= x / 1000;
    if ( and % 2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
        
    return 0;
}
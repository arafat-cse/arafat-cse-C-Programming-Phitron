#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int a;
    int even=0,odd=0,pass=0,neg=0;
    for ( int i = 1; i <=n; i++)
    {
        scanf("%d",&a);
        if (a%2==0)
        {
            even++;
            
           
       }else{
            odd++;
             

        }
        if (a>0)
        {
            pass++;
        }
        else if(a<0){
            neg++;
        }
    }
     printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pass,neg);
    
    return 0;
}
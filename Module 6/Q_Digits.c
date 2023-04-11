#include<stdio.h>
int main()
{

  int digit;
  scanf("%d",&digit);
  for (int i = 1; i <= digit; i++)
  {
      int n;
    scanf("%d",&n);
    do
    {
        printf("%d ", n%10);
        n= n/10;
    } while (n!=0);
    printf("\n");
  }
  
    
    return 0;
}

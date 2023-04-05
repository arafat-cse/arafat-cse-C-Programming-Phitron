#include<stdio.h>
int main(){
int x,y;
scanf("%d %d",&x,&y);
printf("%d+%d=%d\n",x,y,x+y);
printf("%d-%d=%d\n",x,y,x-y);
printf("%d*%d=%d\n",x,y,x*y);
printf("%d/%d=%.2f\n",x,y,(float)x/y);


    return 0;
}
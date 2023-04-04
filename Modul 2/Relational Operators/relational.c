#include<stdio.h>>
int main()
{
    int a,b,equ,n_equ,lethen,gthen,lethen_e,gthen_e;
    scanf("%d%d",&a,&b);
    if(a == b){
        printf("Ture\n",equ);
    }else{
        printf("false\n",equ);
    }
    if(a != b){
        printf(" ture\n",n_equ);
    }else{
        printf("false\n",n_equ);
    }
    if(a<b){
        printf("ture\n",lethen);
    }else{
        printf("false\n",lethen);
    }
    if(a>b){
        printf("ture\n",gthen);
    }else{
        printf("false\n",gthen);
    }
    if( a<=b ){
        printf("ture\n",lethen_e);
    }else{
        printf("flase\n",lethen_e);
    }
      if( a>=b ){
        printf("ture\n",lethen_e);
    }else{
        printf("flase\n",lethen_e);
    }
    return 0;
}
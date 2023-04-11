# arafat-cse-C-Programming-Phitron
arafat-cse/C-Programming-Phitron Batch 3

# Hints: 
# তোমাকে দুইটি সংখ্যা a এবং b দিবে। তোমাকে a-b অর্থাৎ সংখ্যা দুটির বিয়োগফল প্রিন্ট করতে হবে।এখানে একটা কিন্তু আছে। সেটা হলো a-b প্রিন্ট করবে যদি বিয়োগফল ০ বা এর চেয়ে বড় হয়।  এর চেয়ে ছোট হয়ে গেলে ০ ই প্রিন্ট করতে হবে। বুঝছো! 
```c
#include<stdio.h>
int main()
{

    int a,b,div;
    scanf("%d%d",&a,&b);
        div=a-b;
            if (div>0)
            {
                printf("%d",div);
            }
            else{
                printf("0");
            } 
     
    return 0;
}
```

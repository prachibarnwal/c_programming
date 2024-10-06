//prog 34
// to divide two num without using '/' & '%' symbols
#include<stdio.h>
int main(){
    int a,b,res = 0;
    printf("Enter Two Numbers : ");
    scanf("%d %d", &a, &b);
    
    while(a >= b)
    {
        a -= b;
        res++;
    }
    printf("\nQuotient is : %d", res);
    printf("\nRemainder is : %d", a);
    return 0;
}
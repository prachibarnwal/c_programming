//program to calculate power without using maths function
#include<stdio.h>
int main(){
    int a,b,r = 1;
    printf("Enter Two Numbers : ");
    scanf("%d %d", &a, &b);
    for(int i = 1;i<=b;i++)
        r *= a;
    printf("%d ** %d = %d",a,b,r);
    return 0;
}
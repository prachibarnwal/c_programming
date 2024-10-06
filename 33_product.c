// day 33
//program to multiply 2 numbers without using * sign
#include<stdio.h>
int main(){
    int a,b,r = 0;
    printf("Enter Two Numbers : ");
    scanf("%d %d", &a, &b);
    for(int i = 1;i<=b;i++)
        r += a;
    printf("%d X %d = %d",a,b,r);
    return 0;
}
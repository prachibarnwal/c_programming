//day 29
//program to calculate reverse of a number
#include<stdio.h>
int main(){
    int num;
    printf("Enter a NUmber : ");
    scanf("%d",&num);
    int a = num;
    int b = 0;
    while(a > 0){
        b = b * 10 + (a%10);
        a /= 10;
    }
    printf("REVERSE OF %d IS %d", num, b);
    return 0;
}
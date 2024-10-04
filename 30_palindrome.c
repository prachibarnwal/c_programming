//day 30
//program to check if a number is palindrome or not
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
    if(num == b)
        printf("%d is a Palindrome Number\n",num);
    else
        printf("%d is not a Palindrome nUmber\n",num);
    return 0;
}
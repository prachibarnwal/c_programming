#include<stdio.h>
int main(){
    int n, res;
    
    printf("\nEnter a Number : ");
    scanf("%d",&n);
    
    res = 1;
    
    for(int i = n;i>0;i--)
        res *= i;
    printf("\nFactorial of %d is : %d", n, res);
    
    return 0;
}
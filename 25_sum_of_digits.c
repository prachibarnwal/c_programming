// program to calculate sum of digits of a number
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int nn = n;
    int sm = 0;
    while(nn > 0){
        sm += nn % 10;
        nn/=10;
    }
    printf("SUM OF %d IS : %d",n,sm);
    return 0;
}
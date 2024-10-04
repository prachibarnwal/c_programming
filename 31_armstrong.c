//day 31
//to check whether a three digit number is armstrong or not
#include<stdio.h>
int main(){
    int n, res = 0,d;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int nm = n;
    while(nm>0){
        d = nm % 10;
        nm/=10;
        res += d*d*d;
    }
    if(n == res)
        printf("%d is an Armstrong Number",n);
    else
        printf("%d is Not an Armstrong Number",n);
    return 0;
}
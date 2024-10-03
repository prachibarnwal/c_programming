// program to check whether a number is perfect or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int cnt = 0;
    for(int i = 1;i<n;i++)
    {
        if(n%i == 0) cnt = cnt+i;
    }
    if(cnt != n)
        printf("\n%d is Not a Perfect Number ",n);
    else
        printf("\n%d is a Perfect Number ",n);
    return 0;
}
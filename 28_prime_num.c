// program to check whether a number is prime or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int cnt = 0;
    for(int i = 2;i<n;i++)
    {
        if(n%i == 0 && n != 1){
            cnt++;
            break;
        }
    }
    if(cnt > 0)
        printf("\n%d is Not a Prime Number ",n);
    else
        printf("\n%d is a Prime Number ",n);
    return 0;
}
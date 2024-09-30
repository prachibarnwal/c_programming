#include<stdio.h>
int main(){
    int n, p;
    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("\nTABLE OF %d is : ",n);
    for(int i = 1; i<=10; i++){
        p = n*i;
        printf("\n%d X %d = %d",n,i,p);
    }
    return 0;
}

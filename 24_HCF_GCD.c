//HCF or GCD OF A NUMBER
#include<stdio.h>
int main(){
    int a,b,rem;
    printf("\nEnter Two Numbers : ");
    scanf("%d %d",&a,&b);

    while(a%b != 0){
        rem = a%b;
        a = b;
        b = rem;
    }
    printf("\nHCF is : %d",b);

    return 0;
}
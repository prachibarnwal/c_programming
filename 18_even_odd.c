#include<stdio.h>
void main(){
    int num;
    printf("\nEnter a Number : ");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
            printf("\n %d is Even", num);
            break;
        case 1:
            printf("\n %d is Odd",num);
            break;
    }
}
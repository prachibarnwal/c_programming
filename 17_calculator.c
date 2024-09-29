#include<stdio.h>
//#include<conio.h>

void main(){
    float a,b,res;
    int n;
    printf("Enter Two Numbers : ");
    scanf("%f %f", &a, &b);

    printf("\nCHOOSE THE OPERATION");
    printf("\nPRESS 1 : ADD");
    printf("\nPRESS 2 : SUBTRACT");
    printf("\nPRESS 3 : MULTIPLY");
    printf("\nPRESS 4 : Divide");
    printf("\nEnter Your Choice : ");
    scanf("%d", &n);

    switch(n){
        case 1:
            res = a+b;
            printf("\n SUM IS : %f", res);
            break;
        case 2:
            res = a-b;
            printf("\nDIFFERENCE IS : %f", res);
            break;
        case 3:
            res = a*b;
            printf("\nPRODUCT IS : %f", res);
            break;
        case 4:
            res = a/b;
            printf("\nQUOTIENT IS : %f", res);
            break;
        default:
            printf("\nInvalid Option");
    }
}
// prog 37
// to inout 10 numbers and count even & odd numbers

#include<stdio.h>
 
int main(){
    int num, n = 0, p = 0;
    for(int i = 0;i<10;i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &num);
        if(num %2 == 0) p++;
        else n++;
    }
    printf("\nNumber of Odd Numbers : %d",n);
    printf("\nNumber of Even Numbers : %d",p);
    return 0;
}
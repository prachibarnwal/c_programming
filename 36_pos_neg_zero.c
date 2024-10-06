//prog 36
// to input 10 num and count positive negative and zeroes
#include<stdio.h>
 
int main(){
    int num, n, p, z;
    n = p = z = 0;
    for(int i = 0;i<10;i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &num);
        if(num > 0) p++;
        else if(num < 0) n++;
        else z++;
    }
    printf("\nNumber of Negative Numbers : %d",n);
    printf("\nNumber of Zeroes : %d",z);
    printf("\nNumber of Positive Numbers : %d",p);
    return 0;
}
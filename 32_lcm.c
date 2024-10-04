//day 32
//LCM of two numbers;
#include<stdio.h>
int main(){
    int a,b,res;
    printf("Enter Two Numbers : ");
    scanf("%d %d", &a, &b);
    for(int i= 1;i<= a*b; i++)
    {
        if(i % a == 0 && i % b == 0){
            res = i;
            break;
        }
    }
    printf("LCM OF %d & %d is : %d",a,b,res);
    return 0;

}
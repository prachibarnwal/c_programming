#include<stdio.h>
void main(){
    int num;
    printf("\nEnter a Day Number : ");
    scanf("%d",&num);
    switch(num)
    {
        case 1: 
            printf("\nMonday");
            break;
        case 2: 
            printf("\nTuesday");
            break;
        case 3: 
            printf("\nWednesday");
            break;
        case 4: 
            printf("\nThursday");
            break;
        case 5: 
            printf("\nFriday");
            break;
        case 6: 
            printf("\nSaturday");
            break;
        case 7: 
            printf("\nSunday");
            break;
        default:
            printf("\nInvalid Day Number");
    }
}
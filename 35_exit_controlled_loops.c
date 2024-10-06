//prog 35
//to repeat a task till user wants to continue
#include<stdio.h>
int main(){
    int l,b,area;
    char a;

    do{
        printf("Enter Length & Breadth : ");
        scanf("%d %d",&l, &b);
        area = l * b;
        printf("\nArea is : %d",area);
        
        printf("\nDo you want to try Again (y/n) : ");
        //to clear standard input buffer
        fflush(stdin);
        scanf("%c", &a);
    }while(a == 'y' || a == 'Y');
    return 0;
}
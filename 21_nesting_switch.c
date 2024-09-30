#include<stdio.h>
int main(){
    float r, a, c, l, b, p;
    int ch1, ch2;
    printf("1 : RECTANGLE\n");
    printf("2 : CIRCLE\n");
    printf("Enter Your Choice : ");
    scanf("%d", &ch1);
    switch(ch1)
    {
        case 1:
        printf("\nEnter Length and Breadth : ");
        scanf("%f %f", &l, &b);
        printf("\n1 - AREA");
        printf("\n2 - PERIMETER");
        printf("\nEnter Your Choice : ");
        scanf("%d", &ch2);
        switch(ch2)
        {
            case 1:
            a = l*b;
            printf("\nArea of Rectangle is : %.2f", a);
            break;
            case 2:
            p = 2*(l+b);
            printf("\nPerimeter of Rectangle is : %.2f", p);
            break;
            default:
            printf("\nInvalid Choice ");
        }
        break;
        case 2:
        printf("Enter Radius of the Circle : ");
        scanf("%f", &r);
        printf("\n1 - AREA");
        printf("\n2 - CIRCUMFERENCE");
        printf("\nEnter Your Choice : ");
        scanf("%d", &ch2);
        switch(ch2)
        {
            case 1:
            a = 3.14 * r * r;
            printf("\nArea of Circle is : %.2f", a);
            break;
            case 2:
            c = 2*3.14 * r;
            printf("\nCircumference of Circle is : %.2f", c);
            break;
            default:
            printf("\nInvalid Choice ");
        }
        break;
        default:
        printf("INVALID OPTION\n");
    }
    return 0;
}
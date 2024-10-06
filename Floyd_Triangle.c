//floyd's triangle

#include<stdio.h>
int main(){
    int n, k = 1;
    printf("Enter the Number of Rows : ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<=i;j++)
            printf("%-4d ",k++);
        printf("\n");
    }
    return 0;
}
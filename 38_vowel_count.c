//prog 38
// to input any 10 characters and count the number of vowels
#include<stdio.h>
int main(){
    char ch;
    int vow = 0;
    for(int i = 0; i<10; i++)
    {
        printf("\nEnter a Character : ");
        fflush(stdin);
        scanf("%c",&ch);
        if(ch >= 65 && ch <=90)
            ch += 32;
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vow++;
    }
    printf("Number of Vowels are : %d",vow);
    return 0;
}
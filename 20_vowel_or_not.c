#include<stdio.h>

int main(){
    char ch;
    printf("\nEnter a Character : ");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("\nIt is a Vowel");
    else
        printf("\nIt is a Consonant");
}
// To find if the given character is vowel or consonant using if else.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("The given character is a vowel");
    }
    else
    {
        printf("The given character is a consonant");
    }

}
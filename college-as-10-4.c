#include<stdio.h>
#include<string.h>
//Find the length of a string.
int main()
{
    char string[100]; //Define the size of the string
    printf("Enter a string: ");//enter a string ab12!
    gets(string);
    printf("Length of the string is: %d",strlen(string)); //print the length using strlen function
    return 0;
}
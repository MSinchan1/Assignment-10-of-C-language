#include<stdio.h>
#include<string.h>
//C Program to Copy a String
int main()
{
    char string1[100],string2[100]; //declare two string as array
    printf("Enter a string: "); //Entering one string West
    gets(string1);
    printf("Copied string is: %s",strcpy(string2,string1)); //print the copied string using strcpy function
    //copy is done from string1 to string 2
    return 0;
}
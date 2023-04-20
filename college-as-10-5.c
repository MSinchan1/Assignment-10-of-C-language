#include<stdio.h>
#include<string.h>
//Concatenate two strings
int main()
{
    char string1[100],string2[100]; //declare two string as array
    printf("Enter a string: "); //Entering one string West
    gets(string1);
    printf("Enter another string: "); //Entering another string Bengal
    gets(string2);
    printf("New string is: %s",strcat(string1,string2)); //print the concatenated sting using 
    //strcat function West Bengal
    return 0;
}
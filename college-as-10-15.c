#include<stdio.h>
//Copy String Manually Without Using strcpy()
int main()
{
    char string1[100],string2[100]; //declare two string as array
    int i=0; //declare an integer
    printf("Enter a string: "); //Entering one string West
    gets(string1);
    for(i=0;string1[i]!=0;i++) //W...e...s...t
    {
        string2[i]=string1[i]; //W....e...s...t
    }
    string2[i]='\0'; //West\0
    printf("Copied string is: %s",string2);  //print the copied string West\0
    return 0;
}
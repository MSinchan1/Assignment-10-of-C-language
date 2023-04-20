#include<stdio.h>
#include<string.h>
//C Program to Check if a given String is Palindrome
int main()
{
    char string[100]; //Declare a string as an array
    int i=0,palindrome=1; // declare an integer i=0 and intiallize integr plindrome=1 
    printf("Enter a string: "); //Entering a string :eye
    gets(string);
    /*      Conditions for checking the no is pallindrome ir not*/
    while(string[i]!='\0') //e....y....e
    {
        if(string[i]!=string[strlen(string)-i-1])//e(0 position) and e(2 position{length-0-1})....and so on
       // y and y       if 1st and last digit is not equal then if condition satisfy and pallidrome's value==0
        {
            palindrome=0;
            break;
        }
        i++;//1.....2.....3
    }
    /*  if pallindrome's value is fixed then it is palindrome*/
    if(palindrome==1)
    {
        printf("%s is a Palindrome",string);
    }
    else
    {
        printf("%s is not a Palindrome",string);
    }
    return 0;
}
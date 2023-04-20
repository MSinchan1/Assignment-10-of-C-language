#include<stdio.h>
//C Program to Replace Lowercase Characters by Uppercase & Vice-Versa
int main()
{
    char string[100]; //Declare a string as an array
    int i=0;// declare an integer
    printf("Enter a string: "); //Entering a string: Sinchan
    gets(string);
    while(string[i]!='\0')//S....i....n....c......h......a......n
    {
        /* In this problem we can use ascii value in place of characters*/
        /*  conditions for checking the character is uppercase or not*/
        if(string[i]>='A' && string[i]<='Z')//starting from A....B and goes upto Y...Z  
        {
            string[i]=string[i]+32; //S will be replaced by (ascii value of S(32)+ascii value of s(115))
            //32 is the difference between a character's uppercase and lowercase ascii value 
        }
         /*  conditions for checking the character is lowercase or not*/
        else if(string[i]>='a' && string[i]<='z')//starting from a....b and goes upto y...z  
        {
            string[i]=string[i]-32;//i will be replaced by (ascii value of S(105)+ascii value of s(73))
            //32 is the difference between a character's uppercase and lowercase ascii value 
        }
        else
        {
            continue;
        }
        i++;//1....2....3...4....5....6....7
    }
    printf("%s",string);
    return 0;
}
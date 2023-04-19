#include<stdio.h>
//Remove all characters in a string except alphabets
int main()
{
    char string[500],i=0;//declaring a string as an array and a character i
    printf("Enter a string"); //taking the input of a string aaBBc112!
    gets(string);
    while(string[i]!='\0') //a.....a....B.....B....c.....1....1.....2
    {
        /* Conditions to check the alphabets using ascii value*/
        if(string[i]>=65 && string[i]<=90 || string[i]>=97 && string[i]<=122)//a.....a....B.....B....c
        {
            printf("%c",string[i]);//a.....a....B.....B....c
        }
        i++;
    }
    return 0;
}
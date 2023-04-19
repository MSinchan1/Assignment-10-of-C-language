#include<stdio.h>
// Find the frequency of a character in a strings
int main()
{
    char string[500],c;//declaring a string as an array and a character c
    int i,count=0;//declare i and count variable
    printf("Enter a string"); //taking the input of a string aabbcbb
    gets(string);
    printf("Enter a character: "); //taking an input of a character from the user b
    scanf("%c",&c);
    for(i=0;string[i]!='\0';i++)//a....a.....b.....b....c....b.....b
    {
        if(string[i]==c)
        {
            count+=1; //1....2....3.....4
        }
    }
    printf("Frequency of the entered character is: %d",count); //print the result count =4 
    return 0;
}
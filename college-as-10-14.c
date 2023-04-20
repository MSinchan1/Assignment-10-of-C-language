#include<stdio.h>
#include<string.h>
//Concatenate Two Strings Without Using strcat()
int main()
{
    char string1[100],string2[100]; //declare two string as array
    int i,j;
    printf("Enter a string: "); //Entering one string West
    gets(string1);
    printf("Enter another string: "); //Entering another string Bengal
    gets(string2);
    j=strlen(string1); //finding the length of the first string :4
    for(i=0;string2[i]!='\0';i++)//B...e.....n....g...a...l
    {
        string1[j]=string2[i]; //pos 4=B.......pos=5=e........pos8=a....pos9=l
        j++;//5....6....7....8....9...10
    }
    string1[j]='\0'; //adding a null chracter at the end position of the concatenated string
    printf("Concatenated string is: %s",string1);//printing the concatenated string
    return 0;
}
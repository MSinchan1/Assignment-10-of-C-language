#include<stdio.h>
//Reverse a string using recursions
void reverse(char *); //Declareing the secondary function for reverse
        /*  Main Function */
int main()
{
    char string[100]; //Declare a string as an array
    printf("Enter a string: "); //entering a string: Sinchan
    gets(string);
    reverse(string); //calling the reverse function;
    return 0;
}
         /* Secondary Function */
void reverse(char *x)//accessing the given string through a pointer x
{
    if(*x) //it goes upto the previous character of the null.
    {
        reverse(x+1);//Sinchan....inchan......nchan.....chan.....han....an....n
        printf("%c",*x); // printing is start from the last accesseing character
        //n.....a....h.....c.....n....i....S
    }
}
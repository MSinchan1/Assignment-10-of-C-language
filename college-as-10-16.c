#include<stdio.h>
//Calculate Length of String without Using strlen() Function
int main()
{
    char string[100]; //Define the size of the string
    int count=0;//declare two integer
    printf("Enter a string: ");//enter a string ab12!
    gets(string);
    while(string[count]!='\0') //a....b....1....2....!
    {
        count+=1; //1....2...3...4....5
    }
    printf("Length of the string is: %d",count);//print count=5
    return 0;
}
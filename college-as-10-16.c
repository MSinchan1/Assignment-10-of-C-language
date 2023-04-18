#include<stdio.h>
//Calculate Length of String without Using strlen() Function
int main()
{
    char string[100]; //Define the size of the string
    int i,count=0;//declare two integer
    printf("Enter a string: ");//enter a string ab12!
    gets(string);
    for(i=0;string[i]!='\0';i++)//0....1.....2......3....'\0'
    {
        count++; //0....1....2....3....4.....5
    }
    printf("%d",count);//print count=5
    return 0;
}
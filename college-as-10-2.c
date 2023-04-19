#include<stdio.h>
//Find the number of vowels, consonants, digits and white spaces
int main()
{
    char string[100]; // declare a string size 
    int i,v=0,c=0,space=0,digit=0; // declare five integers
    printf("Enter a string: ");//Aebc  12
    gets(string);
    for(i=0;string[i]!='\0';i++) //A....e.....b.....c...... ...... ...1.....2
    {
        /* Condition to check the vowels */
        if(string[i]=='a' || string[i]=='e' ||string[i]=='i' ||string[i]=='o' ||string[i]=='u' ||string[i]=='A' ||
        string[i]=='E' ||string[i]=='I' ||string[i]=='O' ||string[i]=='U')
        {
            v++; //1...2
        }
        /* Condition to check the consonants */
        else if(string[i]>'a' && string[i]<='z' || string[i]>'A' && string[i]<'Z')
        {
            c++; //1...2
        }
        /* Condition to check the space '' */
        else if(string[i]==' ')
        {
            space++; //1....2
        }
        /* Condition to check the digits using ascii value */
        else if(string[i]>=48 && string[i]<=57)
        {
            digit++; //1....2
        }
    }
    /* printing the result*/
    printf("No of vowels: %d\nNo of consonants: %d\nNo of digits: %d\nNo of white spaces: %d",v,c,digit,space);
    return 0;
}
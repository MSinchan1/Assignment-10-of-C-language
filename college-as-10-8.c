#include<stdio.h>
#include<string.h>
//Sort elements in the lexicographical order (dictionary order)
int main()
{
    int i=0,j=0,n;//Declare two integers
    printf("Enter No of words you want to enter:");
    scanf("%d",&n);
    char string[n][100],temp[100];//declare one 2-d string(6 means no of words,100 means size of words) and 
    //another temporary string(size=max size of an word)
    printf("Enter words/names:\n");//Entering six words
    /*      used for taking the inputs of words/names from user     */
    for(i=0;i<=n;i++)
    {
        gets(string[i]);//Laba....Anirban......Sinchan.....Souradeep......Somopriya......Sayan
    }
    /*      for sorting the words in dictionary order   */
    for(i=0;i<n-1;i++) //goes upto (no of words-1) of iteration.(because we have to 
        //compare first with second and so on)  1-2....2-3.....3-4.....4-5....5-6
    {
        for(j=i+1;j<n-1;j++)//used to compare each characters in every word for dictionary order 
        {
            if(strcmp(string[i],string[j])>0)//if i>j then it returns positive value means >0, means first & 
            // second word in not in alphabetical order
            {
                /*      Swaping logic/conditions    */
                strcpy(temp,string[i]); //first word is store in a temporary string
                strcpy(string[i],string[j]); // second word is copied in the first 
                strcpy(string[j],temp); // no temporary string means forst word is copied in the second string
            }
        }
    }
    printf("Dictionary/lexicographical order is:\n");
    /*      used for sorted string type array*/
    for(i=0;i<=n;i++)//goes upto no of words of iteration.
    {
        puts(string[i]); //anirban....laba.....sayan....sinchan.....somopriya....souradeep
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
//C Program to Remove given Word from a String
int main()
{
    char sen[100],word[20];//declare two strings with size as array
    int i,j,temp,check;
    printf("Enter a sentence: ");//enter a sentence Ram is bad boy 
    gets(sen);
    printf("Enter the word to be removed:");//enter the word   bad
    gets(word);
    for(i=0;i<strlen(sen);i++)//iterates upto the length of the sentence 0...1...2...3...4...5...6..7
    {
        temp=i;//0...1...2....3...4...5....6....7
        /*  conditions for find the position of the word in the sentence*/
        for(j=0;j<strlen(word);j++)//iterates upto the length of the word 0..
        {
            if(sen[i]==word[j])  //7==0....8==1...9==2
            {
                i++; //8...9..10
            }
        }
        check=i-temp;//0-0=0..1-1=0..2-2=0...3-3=0...4-4=0....5-5=0...6-6=0...10-7=3
        /*      condition for remove the word from sentence     */
        if(check==strlen(word))//3==3
        {
            for(j=temp;j<(strlen(sen)-strlen(word));j++)//iterates upto the length of the sentence-length of the word(14-3) 7.8..9.10...11.
            {
                sen[j]=sen[j+strlen(word)];//7==7+3=10..8==8+3...12==9+3...13==10+3....14=11+3
            }
            sen[j]='\0'; //add a null character at the ende of the sentence
            break;
        }
    }
    printf("\n New sentence is: %s",sen);//Ram is boy
    return 0;
}
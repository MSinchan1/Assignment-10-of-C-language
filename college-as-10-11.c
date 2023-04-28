#include<stdio.h>
#include<string.h>
//C Program to Find the Largest & Smallest Word in a String.
int main()
{
    char str[100]; //declare  a string with its size
    int i=0,wc=0,min1,min2,max1,max2,car1=0,car2; //declare eight integers
    printf("Enter a sentence: ");//entering a sentence   Ram is a good boy
    gets(str);
    while(i<=strlen(str)) //iterate upto the length of the sentence
    {
        if(str[i]==' ' || str[i]=='\0')//iterates up to the null character && space for checking the upto last word 
        {
            wc+=1;//Ram....is....a....intelligent......boy 1.....2.....3....4.....5
            car2=i-1;//3-1=2....6-1=5.....8-1=7....13-1=12....17-1=16
            /*      this is condition is for iterate the loop only on time*/
            if (wc==1)  //1
            {
                min1=car1;//0
                min2=car2;//2
                max1=car1;//0
                max2=car2;//2
                car1=i+1;//3+1=4
            }
            /*      to find max and min word    */
            else//wc==2....3.....4.....5
            {
                /*      to find the smallest word's position    */
            if(car2-car1<min2-min1)//5-4<2-0.....7-7<5-4.....12-9<7-7-no.....16-14<7-7-no
            {
                min2=car2;//5....7
                min1=car1;//4....7
            }
            /*          to find the largest word's position*/
            if(car2-car1>max2-max1)//12-9>2-2....16-14>12-9-no
            {
                max2=car2;//12
                max1=car1;//9
            }
            car1=i+1;//6+1=7....8+1=9.....13+1=14...17+1=18
            }
        }
        i++;//1...2....3....4...5...6....7....8....9...10....11....12....13....14....15....16....17....18
    }
    //printf("%d  %d  %d  %d  %d",min1,min2,max1,max2,wc);
    printf("Smallest word is: ");
    for(i=min1;i<=min2;i++)//iterates within the range of the smallest word
    {
        printf("%c",str[i]);//a
    }
    printf("\n");
    printf("Largest word is: ");
    for(i=max1;i<=max2;i++)//iterates within the range of the largest word
    {
        printf("%c",str[i]);//i...n...t...e...l...l...i...g....e....n....t
    }
    return 0;
}
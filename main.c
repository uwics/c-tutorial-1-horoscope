/* Please submit group name, and group members */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* You are going to write a C program that takes the user's birth month and day,
   tells them his/her zodiac sign, and then his/her horoscope. Code is given below.
   Please add code where stated
*/

void loadingScreen();

int main()
{
    int choice, day;
    char zodiacSign[12];
    char month[10];

    //Prompt user to enter a specific number for each birth month. January is done for you.
    printf("Please enter number beside your birthday month:\n\n");
    printf("1.\tJanuary\n");
    printf("\n\n\tAnswer:\t\t");
    scanf("%d", &choice);

    //Prompt the user to enter birth day and accept their answer

    //Call on the loading screen function here to add motion to your program

    /* Enter the conditions necessary to determine the zodiac sign of a user within each month.
       Each case is a different month. Add the other cases for the other months.
       January is done for you.
    */

    switch (choice)
    {
           case 1:     strcpy(month, "January");
                       if (day > 0 && day <= 19)
                            strcpy(zodiacSign, "Capricorn");
                       else if (day > 19 && day <=31)
                            strcpy(zodiacSign, "Aquarius");
                       else strcpy(zodiacSign, "None");
                       break;

           default:    printf("Incorrect month\n");
                       strcpy(month, "None");
                       strcpy(zodiacSign, "None");
                       break;
    }

    /* After the zodiac sign is determined, the birthday and horoscope is printed.
       Write a horoscope for each sign. Remember your \t and \n
    */
    fflush(stdin);
    printf("\n\n\tBirthday:\t%s %d\n", month, day);
    printf("\tZodiac Sign:\t%s\n", zodiacSign);
    printf("\n\n---------------*---*---------------\n\n");
    if (strcmp(zodiacSign, "Capricorn")==0)
         printf("Horoscope 1");
    else if (strcmp(zodiacSign, "Aquarius")==0)
         printf("Horoscope 2");
    else if (strcmp(zodiacSign, "Pisces")==0)
         printf("Horoscope 3");
    else if (strcmp (zodiacSign, "Aries")==0)
         printf("Horoscope 4");
    else if (strcmp (zodiacSign, "Taurus")==0)
         printf("Horosscope 5");
    else if (strcmp (zodiacSign, "Gemini")==0)
         printf("Horoscope 6");
    else if (strcmp (zodiacSign, "Cancer")==0)
         printf("Horoscope 7");
    else if (strcmp (zodiacSign, "Leo")==0)
         printf("Horoscope 8");
    else if (strcmp (zodiacSign, "Virgo")==0)
         printf("Horoscope 9");
    else if (strcmp (zodiacSign, "Libra")==0)
         printf("Horoscope 10");
    else if (strcmp (zodiacSign, "Scorpio")==0)
         printf("Horoscope 11");
    else if (strcmp (zodiacSign, "Sagittarius")==0)
         printf("Horoscope 12");
    else printf ("\tGet out of my program !");

    printf("\n\n");
    system("PAUSE");
    return (EXIT_SUCCESS);
}

void loadingScreen() //purely aesthetic. add to the main function above
{
     int i;
     for (i=0;i<2;i++)
     {
         printf("------------------------------------------------\n");
         printf("\n******\n");
         printf("\n------------------------------------------------\n");
         system("cls");

         printf("------------------------------------------------\n");
         printf("\n************\n");
         printf("\n------------------------------------------------\n");
         system("cls");

         printf("------------------------------------------------\n");
         printf("\n******************\n");
         printf("\n------------------------------------------------\n");
         system("cls");

         printf("------------------------------------------------\n");
         printf("\n************************\n");
         printf("\n------------------------------------------------\n");
         system("cls");

         printf("------------------------------------------------\n");
         printf("\n******************************\n");
         printf("\n------------------------------------------------\n");
         system("cls");

         printf("------------------------------------------------\n");
         printf("\n***********************************\n");
         printf("\n------------------------------------------------\n");
         system("cls");

         printf("------------------------------------------------\n");
         printf("\n****************************************\n");
         printf("\n------------------------------------------------\n");
         system("cls");

         printf("------------------------------------------------\n");
         printf("\n*********************************************\n");
         printf("\n------------------------------------------------\n");
         system("cls");
     }
}

/* BONUS POINTS:
   1.    Decorate your output however you want. It can be similar to the loadingScreen function,
         or you can do it your own way. Be creative.
   2.    Allow the program to take more than one birthday, using a WHILE or FOR loop.
*/

//Warning! This is a horror. I knew little programming practices while writing this.
//Pro-Panda
//My first actual C-Program made in 8th-9th grade.

#include <stdio.h>
#include <time.h>
#include "Get-Day.c"

char INVALID_MSG[35] = "Invalid Date. Please try again.";
char DAYS[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int date, year, month;
int answer;
int retry;

int main()
{
        printf("\n\t\t\tCalender Day Finder\n");
        redate:
        printf("\nPlease type the Date (dd-mm-yyyy):\n");
        scanf("%d-%d-%d", &date,&month,&year);
        answer = get_day(date, month, year);
        if (answer == 404)
        {
                printf("%s", INVALID_MSG);
                goto redate;
        }
        printf ("%d",answer);
        printf("It is %s\n",DAYS[answer]);
        printf("\nEnter 1 to retry.\nAnything else to exit\n");
        scanf("%d", &retry);
        if (retry == 1)
                goto redate;
        
}
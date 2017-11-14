//Pro-Panda
//My first actual C-Program made in 8th-9th grade.
//Warning! This is a horror. I knew little programming practices while writing this.

#include <stdio.h>
#include "Get-Day.c"

char INVALID_MSG[35] = "Invalid Date. Please try again.";
char DAYS[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main(){
        int date, year, month, answer;
        int retry=1;

        printf("\n\t\t\tCalender Day Finder\n");
        while (retry==1){
                printf("Please type the Date (dd-mm-yyyy):\n");
                scanf("%d-%d-%d", &date,&month,&year);
                answer = get_day(date, month, year);
                if (answer == 404){
                        printf("%s", INVALID_MSG);
                        continue;
                }
                printf ("%d",answer);
                printf("It is %s\n",DAYS[answer]);
                printf("\nEnter 1 to retry.\nAnything else to exit\n");
                scanf("%d", &retry);
        }
}
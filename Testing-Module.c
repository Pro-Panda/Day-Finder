#include <stdio.h>
#include <string.h>
#include "Get-Day.c"

char DAYS[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main()
{
    int date, month, year, value;
    char day[10];
    FILE *dates = fopen("test/dates.txt","r");
    FILE *days = fopen("test/days.txt","r");
    while(1)
    {
        value = fscanf(dates,"%d-%d-%d",&date,&month,&year);
        fscanf(days,"%s",day);
        if(value==-1)
        {
            printf("Test Successfull");
            break;
        }
        value = get_day(date, month, year);
        if(strcmp(DAYS[value],day)!=0)
        {
            printf("Test Unsuccesful");
            test_print();
            printf("The actual day was %s",day);
            break;
        }            
    }
    return 0;
}


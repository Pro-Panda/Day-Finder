#include <stdio.h>
#include <string.h>
#include "Get-Day.c"

char DAYS[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

//Use and call this test function in 'Get-Day' for printing all values
int test_print()
{
        printf("date: %d\n",date);
        printf("year: %d\n",year);
        printf("month: %d\n",month);
        printf("year_code: %d\n",year_code);
        printf("month_code: %d\n",month_code);
        printf("part_a: %d\n",part_a);
        printf("part_b: %d\n",part_b);
        printf("leap: %d\n",leap);
        printf("year_first_2: %d\n",year_first_2);
        printf("year_last_2: %d\n",year_last_2);
        printf("answer: %d\n",answer);
}

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


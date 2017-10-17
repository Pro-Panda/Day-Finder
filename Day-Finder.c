//Warning! This is a horror. I knew little programming practices while writing this.
//Pro-Panda
//My first actual C-Program

#include <stdio.h>
#include <time.h>

int MONTH_DATES[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int MONTH_DATES_LEAP[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int MONTH_CODES[12] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
int MONTH_CODES_LEAP[12] = {5, 1, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
int YEAR_CODES[4] = {0, 5, 3, 1};
char INVALID_MSG[35] = "Invalid Date. Please try again.";
char DAYS[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int leap_check(int year){
        if(year%4!=0)
                return 0;
        else if(year%100!=0 || year%400==0)
                return 1;
        return 0;
}

int main()
{
        int date, year, month;
        int year_code, month_code;
        int year_last_2, year_first_2;
        int sum_codes, answer;
        int part_a, part_b;
        int leap;
        printf("\n\t\t\tCalender Day Finder\n");
        printf("\t\t\t\t\t\tDeveloped by Rahul Bothra\n");
        redate:
        printf("\nPlease type the Date (dd-mm-yyyy):\n");
        scanf("%d-%d-%d", &date,&month,&year);
        year_first_2 = year/100;
        year_code = YEAR_CODES[year_first_2%4];
        year_last_2 = year%100;
        part_a = year_last_2%7;
        part_b = year_last_2/4;
        leap = leap_check(year);
        if(month>12 || month<0)
        {
                goto redate;
        }
        if (leap)
        {
                month_code = MONTH_CODES_LEAP[month];
                if (date>MONTH_DATES_LEAP[month] || date<0)
                {
                        printf("%s", INVALID_MSG);
                        goto redate;              
                }
        }
        else
        {
                month_code = MONTH_CODES[month];
                if (date>MONTH_DATES[month] || date<0)
                {
                        printf("%s", INVALID_MSG);
                        goto redate;              
                }
        }
        sum_codes = part_a + part_b + month_code + year_code + date;
        answer = sum_codes % 7;
        printf("It is %s\n",DAYS[answer]);
        ad:
        int m;
        printf("\nEnter 1 to retry.\nAnything else to exit\n");
        scanf("%d", &m);
        if (m == 1)
        {
                goto redate;
        }
}
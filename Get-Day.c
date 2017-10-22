#include <stdio.h>

int MONTH_DATES[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int MONTH_DATES_LEAP[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int MONTH_CODES[12] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
int MONTH_CODES_LEAP[12] = {5, 1, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
int YEAR_CODES[4] = {0, 5, 3, 1};

int date, year, month, leap;
int year_code, month_code, part_a, part_b;
int year_last_2, year_first_2;
int answer;

int leap_check(int year){
    if(year%4!=0)
            return 0;
    else if(year%100!=0 || year%400==0)
            return 1;
    return 0;
}

int test()
{
        printf("The value of date is %d\n",date);
        printf("The value of year is %d\n",year);
        printf("The value of month is %d\n",month);
        printf("The value of year_code is %d\n",year_code);
        printf("The value of month_code is %d\n",month_code);
        printf("The value of part_a is %d\n",part_a);
        printf("The value of part_b is %d\n",part_b);
        printf("The value of leap is %d\n",leap);
        printf("The value of year_first_2 is %d\n",year_first_2);
        printf("The value of year_last_2 is %d\n",year_last_2);
        printf("The value of answer is %d\n",answer);
}

int get_day(int date, int month, int year){
    year_first_2 = year/100;
    year_code = YEAR_CODES[year_first_2%4];
    year_last_2 = year%100;
    part_a = year_last_2%7;
    part_b = year_last_2/4;
    leap = leap_check(year);
    if(month>12 || month<0 || date<0)
    {
            return 404;
    }
    if (leap)
    {
            month_code = MONTH_CODES_LEAP[month-1];
            if (date>MONTH_DATES_LEAP[month-1])
            {
                    return 404;
            }
    }
    else
    {
            month_code = MONTH_CODES[month-1];
            if (date>MONTH_DATES[month-1])
            {
                    return 404;
            }
    }
    answer = (part_a + part_b + month_code + year_code + date) % 7;
    // test();    
    return answer;
}
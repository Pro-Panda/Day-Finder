#include <stdio.h>

const int MONTH_DATES[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int MONTH_CODES[12] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
const int YEAR_CODES[4] = {0, 5, 3, 1};

int leap_check(int year){
    if(year%4==0 && (year%100!=0 || year%400==0))
        return 1;
    return 0;
}

int get_day(int date, int month, int year){
    int year_code, month_code, part_a, part_b;
    int year_last_2, year_first_2;
    int leap, answer;

    year_first_2 = year/100;
    year_code = YEAR_CODES[year_first_2%4];
    year_last_2 = year%100;
    part_a = year_last_2%7;
    part_b = year_last_2/4;
    leap = leap_check(year);
    if(month>12 || month<0 || date<0){
        return 404;
    }
    if (leap && month<3){
        month_code = MONTH_CODES[month-1]-1;
        if ((date>29 && month==2) || (date>31 && month==1)){
                return 404;
        }
    }
    else{
        month_code = MONTH_CODES[month-1];
        if (date>MONTH_DATES[month-1]){
                return 404;
        }
    }
    answer = (part_a + part_b + month_code + year_code + date) % 7;
    // test();    
    return answer;
}
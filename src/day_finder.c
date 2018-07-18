// Author: Pro-Panda
// My first program.

#include "day_finder.h"

bool check_leap_year(int year){
    if(year%4 == 0 && (year%100 != 0 || year%400 == 0))
        return true;
    return false;
}


int get_day(int date, int month, int year){

    int year_code, month_code, part_a, part_b;
    int answer;
    
    if(month > 12 || month < 0 || date < 0){
        return 404;
    }

    bool is_leap_year = check_leap_year(year);
    if (is_leap_year && month < 3){
        if ((date > 29 && month == 2) || (date > 31 && month == 1)){
            return 404;
        }
        month_code = MONTH_CODES[month-1]-1;
    }
    else{
        month_code = MONTH_CODES[month-1];
        if (date > MONTH_DATES[month-1]){
            return 404;
        }
    }

    year_code = YEAR_CODES[(year/100) % 4];
    part_a = year % 100;
    part_b = (year % 100) / 4;

    answer = (part_a + part_b + month_code + year_code + date) % 7; 
    return answer;
}


int main(){
        int date, year, month, answer;
        char retry;
        do{
            printf("Enter date [dd-mm-yyyy]:\n");
            scanf("%d-%d-%d", &date,&month,&year);
            
            answer = get_day(date, month, year);
            if (answer == 404){
                    printf("Error: Invalid date. Retry");
                    continue;
            }
            printf("It is %s\n",DAYS[answer]);
            
            printf("Retry [y/n] ?\n");
            scanf(" %c", &retry);
        }while(retry=='y');
}
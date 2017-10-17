//Warning! This is a horror. I knew little programming practices while writing this.
#include <stdio.h>
#include <time.h>

int MONTH_DATES[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int MONTH_CODES[12] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
int MONTH_CODES_LEAP[12] = {5, 1, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
int YEAR_CODES[4] = {0, 5, 3, 1};
char INVALID_MSG[35] = "Invalid Date. Please try again.";
char DAYS[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main()
{
        int date, year, month;
        int year_code, month_code;
        int year_last_2;
        int sum_codes, answer;
        int loop_counter;
        int part_a, part_b;
        printf("\n\t\t\tWelcome to Calender Day Finder. \nType any date and get the day\n");
        printf("\t\t\t\t\t\tDeveloped by Rahul Bothra\n");
lp:
        printf("\nPlease type the Date (dd):\n");
        scanf("%d", &date);
        printf("Please type the year: (yyyy)\n");
        scanf("%d", &year);
        for (loop_counter = 0; loop_counter < 400; loop_counter++)
        {
                int temp;
                temp = year - loop_counter;
                if (temp % 400 == 0)
                {
                        if ((loop_counter >= 0) && (loop_counter <= 99))
                                year_code = 0;
                        else if ((loop_counter >= 100) && (loop_counter <= 199))
                                year_code = 5;
                        else if ((loop_counter >= 200) && (loop_counter <= 299))
                                year_code = 3;
                        else if ((loop_counter >= 300) && (loop_counter <= 399))
                        {
                                year_code = 1;
                        }
                }
        }
        for (loop_counter = 0; loop_counter < 100; loop_counter++)
        {
                int temp = year - loop_counter;
                if (temp % 100 == 0)
                {
                        year_last_2 = year - temp;
                        part_a = year_last_2 % 7;
                        part_b = year_last_2 / 4;
                }
        }

        printf("Please type the month no. that is against the month name \n 1  | January\n 2  | February\n 3  | March\n \
4  | April\n 5  | May\n 6  | June\n 7  | July\n 8  | August\n 9  | September\n 10 | October\n 11 | November \n 12 | December\n ");
gp:
        scanf("%d", &month);

        switch (month)
        {
        case 1:
                if (date > 31)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                {
                        if ((year % 100 == 0) && (year % 400 != 0))
                        {
                                month_code = 6;
                        }
                        else if ((year % 100 == 0) && (year % 400 == 0))
                        {
                                month_code = 5;
                        }
                        else if (year % 4 == 0)
                        {
                                month_code = 5;
                        }
                        else
                                month_code = 6;
                }
                break;
        case 2:
                if ((year % 4 == 0) && (date > 29))
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else if ((year % 4 == 0) && (date <= 29))
                {
                        if (year % 100 != 0)
                        {
                                month_code = 1;
                        }
                        else if ((year % 100 == 0) && (year % 400 != 0))
                        {
                                if (date > 28)
                                {
                                        printf("%s", INVALID_MSG);
                                        goto lp;
                                }
                                else
                                        month_code = 2;
                        }
                        else if ((year % 100 == 0) && (year % 400 == 0))
                        {
                                if (date <= 29)
                                {
                                        month_code = 1;
                                }
                                else
                                {
                                        printf("%s", INVALID_MSG);
                                        goto lp;
                                }
                        }
                }
                else if (date > 28)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                {
                abd:
                        if ((year % 100 == 0) && (year % 400 != 0))
                        {
                                month_code = 2;
                        }
                        else if ((year % 100 == 0) && (year % 400 == 0))
                        {
                                month_code = 1;
                        }
                        else if (year % 4 == 0)
                        {
                                month_code = 1;
                        }
                        else
                                month_code = 2;
                }
                break;
        case 3:
                if (date > 31)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                        month_code = 2;
                break;
        case 4:
                if (date > 30)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else

                        month_code = 5;
                break;
        case 5:
                if (date > 31)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                        month_code = 0;
                break;
        case 6:
                if (date > 30)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                        month_code = 3;
                break;
        case 7:
                if (date > 31)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                        month_code = 5;
                break;
        case 8:
                if (date > 31)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                        month_code = 1;
                break;
        case 9:
                if (date > 30)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                        month_code = 4;
                break;
        case 10:
                if (date > 31)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                        month_code = 6;
                break;
        case 11:
                if (date > 30)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                        month_code = 2;
                break;
        case 12:
                if (date > 31)
                {
                        printf("%s", INVALID_MSG);
                        goto lp;
                }
                else
                        month_code = 4;
                break;
        default:
                printf("Invalid Choice. Please type again.");
                goto gp;
        }
        sum_codes = part_a + part_b + month_code + year_code + date;

        answer = sum_codes % 7;
        if (answer == 0)
                printf("\nIt is Sunday.\n");
        else if (answer == 1)
                printf("\nIt is Monday.\n");
        else if (answer == 2)
                printf("\nIt is Tuesday.\n");
        else if (answer == 3)
                printf("\nIt is Wednesday.\n");
        else if (answer == 4)
                printf("\nIt is Thursday.\n");
        else if (answer == 5)
                printf("\nIt is Friday.\n");
        else
        {
                printf("\nIt is Saturday.\n");
        }

        if ((date == 2) && (month == 10))
                printf("This is Gandhi Jayanti.");
        else if ((date == 15) && (month == 8))
                printf("This is India's Independence Day.\n");
        else if ((date == 25) && (month == 12))
                printf("This is Christmas.\n");
        else if ((date == 14) && (month == 1))
                printf("This is Makar Sakranti.\n");
        else if ((date == 26) && (month == 1))
                printf("This is India's Republic Day\n");
        else if ((date == 1) && (month == 5))
                printf("This is May Day.\n");
        else if ((date == 5) && (month == 6))
                printf("This is Rahul Bothra's Birthday.\n");
        else
        {
        }

ad:
        int m;
        printf("\nPress 1 to find another day.\nPress 2 to exit\n");
        scanf("%d", &m);
        if (m == 1)
        {
                goto lp;
        }
        else if (m == 2)
        {
                printf("Are you sure you want to Exit?\nPress y to confirm or n to go back.\n");
        mp:
                char o;
                scanf("%s", &o);
                switch (o)
                {
                case 'y':
                        printf("Well, Goodbye.");
                        break;
                case 'n':
                        goto lp;
                        break;
                default:
                        printf("\nWrong choice.\nPlease try again.\n");
                        goto mp;
                }
        }
        else
        {
                printf("Wrong Choice. Please Try Again");
                goto ad;
        }
}
/** 
 * Write a program to input the date, month and year. Check the date 
 * and month entered valid or not. Calculate the day of the week of that day
 * @link https://en.wikipedia.org/wiki/Gregorian_calendar
 * @link https://en.wikipedia.org/wiki/Zeller%27s_congruence
 */
#include <stdio.h>

int main() {
    unsigned day, month, year, top, dayofweek; // t is the maximum number of days in the month

    printf("Enter day month year:");
    scanf("%u%u%u", &d, &m, &y);

    if (year < 1582) {
        printf("The Gregorian calendar begins in 1582\n");
        return 1;
    }

    if (month < 1 || month > 12) {
        printf("Invalid month\n");
        return 2;
    }

    switch (month) { 
        case 4: case 6: case 9: case 11: top = 30; break;
        case 2: top = 28 + ((y % 4 == 0 && y % 100) || y % 400 == 0); break;
        default: top = 31;
    } 

    if (day < 1 || day > top) {
        printf("Invalid day\n");
        return 3;
    }

    // Zeller formula
    year -= (14 - month) / 12;
    month += 12 * (14 - month) / 12 - 2;
    dayofweek = (day + year + year / 4 - year / 1000 + y / 400 + (31 * month) / 12) % 7;

    if (!dayofweek) printf("Sunday\n");
    else printf("%u\n", dayofweek + 1);

    return 0;
}
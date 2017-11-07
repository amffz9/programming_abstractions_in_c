/*
 * Page 98 in Programming Abstractions in C
 * Exercise 1
 */
#include <stdio.h>

typedef enum {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} weekdayT;

weekdayT IncrementDay(weekdayT startDay, int delta) {

    if (startDay == Saturday && delta > 0) {
        return Sunday;
    } else if (startDay == Sunday && delta < 0) {
        return Saturday;
    } else {
        return startDay + delta;
    }
}

weekdayT NextDay(weekdayT day) {
    return IncrementDay(day, 1); //plus one for the next day
}

weekdayT PreviousDay(weekdayT day) {
    return IncrementDay(day, -1); //minus one for the previous day
}

int main(int argc, char const *argv[]) {
//This main function is to test the functions specified in the book
    int last_input = 0;
    weekdayT currentDay = Sunday;

    while (1) {
        printf("Enter 1 to increase the day by one\n And 2 to decrease the day: \n");
        scanf("%d", &last_input);

        if (last_input == 1) {
            currentDay = NextDay(currentDay);
        }
        if (last_input == 2) {
            currentDay = PreviousDay(currentDay);
        }

        if (last_input == -1) {
            break;
        }

        switch (currentDay) {
            case Sunday:
                printf("Sunday\n");
                break;
            case Monday:
                printf("Monday\n");
                break;
            case Tuesday:
                printf("Tuesday\n");
                break;
            case Wednesday:
                printf("Wednesday\n");
                break;
            case Thursday:
                printf("Thursday\n");
                break;
            case Friday:
                printf("Friday\n");
                break;
            case Saturday:
                printf("Saturday\n");
                break;
            default:
                printf("Invalid Day\n");
                break;
        }
    }


    return 0;
}

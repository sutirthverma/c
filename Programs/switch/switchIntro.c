#include <stdio.h>

int main()
{
    enum weekday
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };
    enum weekday today = Monday;

    switch (today)
    {

    case Monday:
        printf("Today is Monday.");
        break;
    case Tuesday:
        printf("Today is Tuesday.");
        break;
    case Wednesday:
        printf("Today is Wednesday.");
        break;
    case Thursday:
        printf("Today is Thursday.");
        break;
    case Friday:
        printf("Today is Friday.");
        break;
    case Saturday:
        printf("Today is Saturday.");
        break;
    case Sunday:
        printf("Today is Sunday.");
        break;
    }
}
#include "holidayjp.h"
#include <stdio.h>

int main()
{
    holidayjp_holiday* holidays[365] = {};

    holidaysjp *h = holidayjp_new();
    holidayjp_between(h, "2017-04-25", "2017-05-09", holidays);
    printf("%s", holidays[0]->name);
    return 0;

    for (int i = 0; i < 1; i++) {
        printf("%s", holidays[i]->name);
        i++;
    }
}

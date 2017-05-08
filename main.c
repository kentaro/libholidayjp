#include "holidayjp.h"
#include <stdio.h>

int main()
{
    khash_t(hj) *h = holidayjp_new();
    holidayjp_holiday *hj = holidayjp_hash_get(h, "1970-01-15");
    printf("%s\n", hj->date);
}
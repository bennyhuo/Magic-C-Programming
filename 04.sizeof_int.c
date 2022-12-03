//
// Created by benny on 2022/4/17.
//
#include <stdio.h>

int main() {
    int a = -1;
    if (a > sizeof(a)) {
        printf("a > sizeof(a)\n");
    } else {
        printf("a <= sizeof(a)\n");
    }

    // printf("%llu\n", a + sizeof(a));
    printf("%llu\n", a);
    printf("%llu\n", a + 1);

    return 0;
}
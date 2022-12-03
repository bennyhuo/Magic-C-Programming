//
// Created by benny on 2022/4/17.
//
#include <stdio.h>

int main() {

    int x[] = {0, 1, 2, 3, 4};
    int y[] = {10, 11, 12, 13, 14};

    int z;


    x[2];
    int *p = x;
    *(p + 2); // p[2]
    *(2 + p); // 2[p]
    z = 2[x] + 3[y];
    z = *(2 + x) + *(3 + y);
    z = x[2] + y[3];

    3[(void *)1];

    printf("%d\n", z);
    printf("%d\n", sizeof(x));
    printf("%d\n", sizeof(p));
    printf("%llx\n", x + 2);
    printf("%llx\n", *(p + 2));

    return 0;
}
#include <stdio.h>

float a3(int n) {
    float r0 = 1.0;
    float r1 = 4.0;

    if (n == 0)
        return r0;
    if (n == 1)
        return r1;

    int i;
    for (i = 1; i <= n-1; i++) {
        float pom = r0;
        r0 = r1;
        r1 = 2 * r0 + 0.5 * pom;
    }

    return r1;
}

/*
a3(4) = 42.25
     r0 = 1
     r1 = 4
     4 == 0 false
     4 == 1 false

     i
     i = 2
     1 <= 4     pom = 1
                r0 = 4
                r1 = 2 * 4 + 0.5 * 1 = 8.5

     i = 3
     2 <= 4     pom = 4
                r0 = 8.5
                r1 = 2 * 8.5 + 0.5 * 4 = 19

     i = 4
     4 <= 4     pom = 8.5
                r0 = 19
                r1 = 2  * 19 + 0.5 * 8.5 = 42.25

     return r1 = 42.5
 */

int main() {


    printf("seq(4) = %f", a3(4));

    return 0;
}
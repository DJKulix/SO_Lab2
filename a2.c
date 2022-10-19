#include <stdio.h>

float a2(int n) {
    float r0 = 1;
    float r1 = 4;
    float r2 = 8.5;

    if (n == 0)
        return r0;
    if (n == 1)
        return r1;
    if (n == 2)
        return r2;

    int i;
    for (i = 1; i <= n - 2; i++) {
        r0 = r1;
        r1 = r2;
        r2 = 2 * r1 +  0.5 * r0;
    }

    return r2;
}

/*
a2(4) = 42.25
r0 = 1
r1 = 4
r2 = 8.5

4 == 1  false
4 == 4  false
4 == 8.5  false

i

i = 1

1 <= 4      r0 = 4
            r1 = 8.5
            r2 = 2 * 8.5 + 0.5 * 4 = 19

i = 2
2 <= 2      r0 = 2
            r1 = 8.5
            r2 = 2  * 19 + 0.5 * 8.5 = 42.25

3 <= 2   false

return r2 = 42.25
*/

int main() {
    printf("a2(4) = %f", a2(4));
    return 0;
}

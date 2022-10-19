#include <stdio.h>

float f(int n) {
    if (n == 0)
        return 1.0;
    if (n == 1)
        return 4.0;

    return 2 * f(n-1) +  0.5 * f(n-2);
}

float a1(int n) {
    static int call;

    call++;
    printf("a%d(%d) = %f\n",call,  n, f(n));

    if (n == 0)
        return 1.0;
    if (n == 1)
        return 4.0;

    return 2 * a1(n-1) + 0.5 * a1(n-2);
}

int main() {
    a1(4);
    return 0;
}


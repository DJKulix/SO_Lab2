#include <stdio.h>

double sequence1(int n) {
    if(n == 0)
        return 1;
    if(n == 1)
        return 4;
    else
        return 2 * sequence1(n-1) + 0.5 * sequence1(n-2);
}

double sequence2(int n) {
    double tab[n];
    tab[0] = 1;
    tab[1] = 4;
    for (int i = 2; i < n; i++) {
        tab[i] = 2 * tab[i - 1] + 0.5 * tab[i - 2];
    }
    return tab[n - 1];
}

double sequence3(int n) {
    if (n == 0) {
        printf("\nn = 0, return 3");
        return 1.0;
    }
    if (n == 1) {
        printf("\nn = 1, return 4");
        return 4.0;
    } else {
        printf("\nn = %d, return 0.5* %d + 2 * %d", n, n - 1, n - 2);
        return 2 * sequence3(n - 1) + 0.5 * sequence3(n - 2);
    }
}

int main() {


    printf("seq1(5) = %f\n", sequence1(5));
    printf("seq2(5) = %f\n", sequence1(5));
    printf("seq3(5) = %f\n", sequence1(5));
    return 0;
}
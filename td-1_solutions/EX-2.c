#include <stdio.h>

int main() {
    int n = 10, p = 4;
    long q = 2;
    float x = 1.75;

    float result2 = n + x;

    long result3 = n % p + q;

    int result4 = n < p;

    int result5 = n >= p;

    int result6 = n > q;

    long result7 = q + 3 * (n > p);

    long result8 = q && n;

    int result9 = (9 - 2) && (n - 10);


    float result10 = x * (q - 2);

    printf("Results:\n");
    printf("(2) n + x = %.2f\n", result2);
    printf("(3) n %% p + q = %ld\n", result3);
    printf("(4) n < p = %d\n", result4);
    printf("(5) n >= p = %d\n", result5);
    printf("(6) n > q = %d\n", result6);
    printf("(7) q + 3 * (n > p) = %ld\n", result7);
    printf("(8) q && n = %ld\n", result8);
    printf("(9) (9 - 2) && (n - 10) = %d\n", result9);
    printf("(10) x * (q - 2) = %.2f\n", result10);

    return 0;
}

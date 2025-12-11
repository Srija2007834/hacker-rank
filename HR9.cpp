#include <stdio.h>

int main() {
    int n, sum = 0;

    // Read the five-digit integer
    scanf("%d", &n);

    // Loop to extract digits and add them
    while (n > 0) {
        sum += n % 10;   // get last digit
        n /= 10;         // remove last digit
    }

    // Print the sum of digits
    printf("%d\n", sum);

    return 0;
}


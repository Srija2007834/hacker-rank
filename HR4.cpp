#include <stdio.h>

// helper function to return maximum of two numbers
int max(int x, int y) {
    return (x > y) ? x : y;
}

// function to return maximum of four numbers
int max_of_four(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int result = max_of_four(a, b, c, d);
    printf("%d\n", result);
    return 0;
}


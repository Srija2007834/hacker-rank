#include <stdio.h>

int main() {
    char ch;
    char str[100];
    char sentence[100];

    // Take character input
    scanf("%c", &ch);

    // Take string input
    scanf("%s", str);

    // Clear newline left in buffer
    scanf("\n");

    // Take sentence input (with spaces)
    scanf("%[^\n]%*c", sentence);

    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);

    return 0;
}


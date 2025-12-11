#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    // Read the input sentence
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    // Split the sentence into words using strtok
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}

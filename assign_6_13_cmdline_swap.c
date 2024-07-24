#include <stdio.h>

int main(int argc, char *argv[]) {
    // Print the number of command-line arguments
    printf("Number of Arguments: %d\n", argc);

    // Print arguments before swapping
    printf("Before swapping, two values of command-line arguments are:\n");
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    // Swap arguments if there are at least 3 arguments
    if (argc > 2) {
        char *temp = argv[1];
        argv[1] = argv[2];
        argv[2] = temp;

        // Print arguments after swapping
        printf("After swapping, two values of command-line arguments are:\n");
        for (int i = 0; i < argc; i++) {
            printf("Argument %d: %s\n", i, argv[i]);
        }
    } else {
        printf("Not enough arguments to swap.\n");
    }

    return 0;
}

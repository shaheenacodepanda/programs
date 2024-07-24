#include <stdio.h>
/*
PS C:\Users\shahe\Desktop> gcc cmdline.c -o cmd
PS C:\Users\shahe\Desktop> ./cmd hello 1 2
Number of Arguments : 4
Argument 0: C:\Users\shahe\Desktop\cmd.exe
Argument 1: hello
Argument 2: 1
Argument 3: 2
Argument 4: (null)
*/
int main(int argc, char *argv[]) {
    // Print the number of command-line arguments
    printf("Number of arguments: %d\n", argc);

    // Print each argument
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}

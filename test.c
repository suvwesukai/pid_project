#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 100

int main(void) {
    char command[MAX_COMMAND_LENGTH];

    while (1) {
        printf("$ ");
        fflush(stdout);

        if (fgets(command, sizeof(command), stdin) == NULL) {
            break;
        }

        command[strcspn(command, "\n")] = '\0';

        printf("%s\n", command);
    }

    printf("\n");
    return EXIT_SUCCESS;
}


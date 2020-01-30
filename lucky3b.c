#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *goodPassword();
int main(int argc, char *argv[]) {
    printf("Enter your password:");
    if (strcmp(goodPassword(), "447") == 0) {
        printf("Congratulations, it is your lucky day today!\n");
    }
    else {
        printf("Not your lucky day today, try again!\n");
    }
    return 0;
}

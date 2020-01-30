#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *goodPassword() {
    char Password[8];
    char ans[8] = "1234567";
    gets(Password);
    return strdup(ans);
}

int main(int argc, char *argv[]) {
    printf("Enter your password:");
    char *pwd = goodPassword();
    if (strcmp(pwd, "447") == 0) {
        printf("Congratulations, it is your lucky day today!\n");
    }
    else {
        printf("Not your lucky day today, try again!\n");
    }
    if (pwd) {
        free(pwd);
    }
    return 0;
}

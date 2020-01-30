#include <stdio.h>
#include <stdlib.h>
long *ret;
char goodPassword(int offset1, int offset2) {
    char Password[100];
    ret = (long*)(Password + offset1);
    *ret = *ret + offset2;
    gets(Password);
    return 'N';
}

int main(int argc, char *argv[]) {
    char buf[100];
    int offset1, offset2;
    printf("Enter offset1:");
    fgets(buf, 100, stdin);
    offset1 = atoi(buf);
    printf("Enter offset2:");
    fgets(buf, 100, stdin);
    offset2 = atoi(buf);
    printf("Enter your password:");
    if (goodPassword(offset1, offset2) == 'Y') {
        printf("Congratulations, it is your lucky day today!\n");
    }
    else {
        printf("Not your lucky day today, try again!\n");
    }
    return 0;
}

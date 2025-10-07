/*
Name: Njogu Cynthia Wangui
Reg No: PA106/G/29296/25
Desription:Program to Prompt user to enter Password.
*/

#include <stdio.h>

int main() {
    int password;
    int correct_password = 1234;

    do {
        printf("Enter password: \n ");
        scanf("%d", &password);
    } while (password != correct_password);

    printf("\n Access granted\n");

    return 0;
}
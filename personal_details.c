//Program to display personal details
/* 
Name: Njogu Cynthia
Reg No: PA106/G/29296/25
Description:Program to display personal details
*/

#include <stdio.h>

int main() {
    // Create variables
    float height;
    int id_number[30];
    float bank_balance;
    int phone_number[50];

    // Prompt user to input personal details
    printf("Enter your height (in centimetres): ");
    scanf("%f", &height);

    printf("Enter your ID number:");
    scanf("%d", id_number);

    printf("Enter your bank balance:");
    scanf("%f", &bank_balance);

    printf("Enter your phone number:");
    scanf("%d", phone_number);

    // Print users input
    printf("\nHeight: %.2f centimetres\n", height);
    printf("ID Number: %d\n", id_number);
    printf("Bank Balance: %.2f\n", bank_balance);
    printf("Phone number: %d\n", phone_number);

    return 0;
}
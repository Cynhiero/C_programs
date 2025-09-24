/*
Name:Njogu Cynthia Wangui
Reg No:PA106/G/29296/25
Description:Program to display Bank loan requirements
*/

#include<stdio.h>

int main(){
    int age;
    float income;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your income: ");
    scanf("%f", &income);

    if(age>=21 &&income>=21000)
        printf("\n Congratulations you qualify for a loan");
        else
            printf("\n Unfortunately we are unable to offer a loan at this time");

    return 0;
}
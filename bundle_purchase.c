/*
Name: Njogu Cynthia Wangui
Reg No: PA106/G/29296/25
Desription:Program to calculate total water bill
*/

#include<stdio.h>

int main(){
	int option, bundle, cost(KES);
	
	printf("Select a data bundle: \n");
	printf("1. 100MB @ 50 KES \n");
	printf("2. 500MB @ 200 KES \n");
	printf("3. 1GB @ 350KES \n");
	printf("4. 2GB @ 600KES \n");
	
	printf("Enter your choice ( 1-4): ");
	scanf("%d", &option);
	
	switch(option){
		case 1: "option 1 is selected";
			printf("You selected 100MB. cost = 50KES \n");
			break;
		case 2: " option 2 is selected";
			printf("You have selected 500MB. cost = 200KES \n");
			break;
		case 3: "option 3 is selected";
			printf("You have selected 1GB. cost =  350KES \n");
			break;
		case 4: "option 4 is selected";
			printf("You have selected 2GB. cost = 600KES \n");
			break;
		default:
		    printf("invalid choice");
			break;	
	}
	
	return 0;
}
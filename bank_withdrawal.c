/*
Name: Njogu Cynthia Wangui
Reg No: PA106/G/29296/25
Desription:Program to calculate total water bill
*/

#include <stdio.h>

int main()
{
	float balance, withdrawal;
	
	printf("Enter account balance:");
	scanf("%f" , & balance);
	printf ("\n Your balance is: %.2f \n",balance );
	
	while(balance > 0)
	{
		   printf("\n How much do you want to withdraw: " );
		   scanf("%f", & withdrawal);
		   
		   balance -= withdrawal;
		   
		   printf("\n Your remaining balance is: %.2f \n" , balance );	
	}
	
	return 0;
}
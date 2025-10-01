/*
Name: Njogu Cynthia Wangui
Reg No: PA106/G/29296/25
Desription:Program to calculate total water bill
*/

#include<stdio.h>

int main(){
	int units;
	float water_bill;
	
    printf("Enter units consumed:");
	scanf("%d", &units);
	
	if(units<=30){
		water_bill=20 * units;
	}
	else if (units>=31 && units<=60){
		water_bill=25 * units;
	}
	else if ( units>60){
		water_bill=30 *  units;
	}
	
	printf("The total water bill is KES. %.2f", water_bill);
	return 0;
}
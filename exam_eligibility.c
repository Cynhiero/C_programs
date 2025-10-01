/*
Name: Njogu Cynthia Wangui
Reg No: PA106/G/29296/25
Desription:Program to check students exam eligibility
*/

#include<stdio.h>

int main(){
	
	int attendance;
	float average_marks;
	
	printf("Enter attendance: \n");
	scanf("%d", &attendance);
	
	printf("Enter your average_marks \n");
	scanf("%f", &average_marks);
	
	if(attendance>=75 && average_marks>=40){
		printf("Eligible");
	}
	else{
		printf("Not Eligible");
	}
	return 0;
}
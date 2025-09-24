/* 
Name:Njogu Cynthia Wangui
Reg No:PA106/G/29296/25
Description:Program to compute volume and surface area of a cylinder
*/
#include<stdio.h>

int main(){
	float radius,height,volume,surface_area;
	float pi = '3.142';
	
	printf("Enter pi:");
	scanf("%f", &pi);
	
	printf("Enter radius:");
	scanf("%f", &radius);
	
	printf("Enter height:");
	scanf("%f", &height);
	
	volume = pi* radius*radius*height;
	surface_area = 2*pi*radius*radius + 2*pi*radius*height;
	
	printf("\n volume is %.2fcentimetres", volume);
	printf("\n surface_area is %.2fcentimetre", surface_area);
	
	return 0;
}

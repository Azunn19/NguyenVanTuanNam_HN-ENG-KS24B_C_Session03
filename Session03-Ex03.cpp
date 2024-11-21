#include<stdio.h>
int main(){
	float r;
	float pi = 3.14;
	printf("Hay nhap ban kinh duong tron: ");
	scanf("%f",&r);
	float C = 2*r*pi;
	float S = r*r*pi;
	printf("Chu vi va dien tich hinh tron co ban kinh %.2f lan luot la %.2f va %.2f\n", r, C, S );
	
	return 0;
} 

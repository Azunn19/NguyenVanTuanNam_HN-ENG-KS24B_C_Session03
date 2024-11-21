#include<stdio.h>
int main(){
	int number;
	printf("Hay nhap vao so nguyen co 4 chu so: ");
	scanf("%d",&number);
	int nghin = number/1000;
	int tram = (number/100)%10;
	int chuc = (number/10)%10;
	int donvi = number%10;
	int sum = nghin+tram+chuc+donvi;
	printf("Tong cac chu so cua %d la: %d\n", number, sum);
	
	return 0;
}

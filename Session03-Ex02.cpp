#include<stdio.h>
int main(){
	float C;
	printf("Hay nhap vao nhiet do muon doi: ");
	scanf("%f",&C);
	float F = (C*9/5)+32;
	printf("%.2f do C = %.2f do F\n", C, F);
	
	return 0;
}

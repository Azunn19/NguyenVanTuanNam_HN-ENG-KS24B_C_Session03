#include<stdio.h>
int main(){
	float toan, van, anh;
	printf("Hay nhap lan luot 3 diem toan, van, anh: ");
	scanf("%f %f %f",&toan, &van, &anh);
	float overall = toan+van+anh;
	float avgMark = overall/3;
	printf("Tong diem 3 mon la %.2f\n", overall);
	printf("Diem trung binh 3 mon la %.2f\n", avgMark);
	
	return 0;
}

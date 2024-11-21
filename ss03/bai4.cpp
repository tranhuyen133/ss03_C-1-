#include <stdio.h>
int main (){
	float toan, van, anh;
	printf("Nhap tong diem va diem trung binh cua van, toan, anh: ");
	scanf("%f %f %f", &toan, &van, &anh);
    float total = toan + van + anh;
	float medium = (toan + van + anh)/3;
	printf("Tong diem cua toan van anh: %.2f va diem trong binh cong: %.2f", total, medium );
}
	
	


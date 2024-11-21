#include <stdio.h>
int main (){
	float r;
	float pi = 3.14 ; 
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f",&r);
	float area = r*2*pi  ;
	float perimeter = r*r*pi  ;
    printf("Hinh tron co dien tich la:%f va chu vi la:%f", area, perimeter);
}

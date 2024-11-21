#include <stdio.h>
int main(){
	int num;
	printf("Nhap 4 so nguyen co 4 chu so la");
	scanf("%d",&num);
	int sum = num % 10 + (num / 10) % 10 + (num / 100) % 10 + num / 1000;
	printf("%d",sum);
}

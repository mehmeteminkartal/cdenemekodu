

#include <stdio.h>


int topla(int a, int b) {
	return a + b;
}

int cikart(int a, int b) {
	return a - b;
}

int carp(int a, int b) {
	return a * b;
}

float bol(int a, int b) {
	return (float)a / (float)b;
}

int main() {
	int a, b, islem;
	
	printf("1: Toplama\n2: Çıkartma\n3: Çarpma\n4: Bölme\n5: Çıkış\nİşlem Seçiniz: ");
	scanf("%d", &islem);
	
	printf("A sayısını giriniz: ");
	scanf("%d", &a);
	
	
	printf("B sayısını giriniz: ");
	scanf("%d", &b);
	
	
	switch(islem) {
		case 1:
			printf("%d + %d = %d\n", a, b, topla(a, b));
			break;
		case 2:
			printf("%d - %d = %d\n", a, b, cikart(a, b));
			break;
		case 3:
			printf("%d * %d = %d\n", a, b, carp(a, b));
			break;
		case 4:
			printf("%d / %d = %f\n", a, b, bol(a, b));
			break;
		case 5:
			printf("Çıkış\n");
			return 0;
			break;
	}
	
	return 0;
}

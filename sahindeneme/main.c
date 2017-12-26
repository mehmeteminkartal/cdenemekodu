
#include <stdio.h>


int asalmi(int sayi) {
	
	if (sayi % 2 == 0) {
		return 0;
	}
	
	for (int i = 2; i < sayi; i++) {
		if(sayi % i == 0) {
			return 0;
		}
	}
	
	return 1;
}


int main() {
	
	//	30 ile 40 arasındaki asal sayıların toplamı
	
	int toplam = 0;
	
	for(int i = 30; i <= 40; i++) {
		if (asalmi(i)) {
			toplam += i;
		}
	}
	
	printf("Toplam: %d\n", toplam);
	
	return 0;
}

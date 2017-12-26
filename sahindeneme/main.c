
#include <stdio.h>

int main() {
	
	//	20 ile 50 arasındaki çift ve tek sayıların toplamı
	
	int ciftToplam = 0;
	int tekToplam = 0;
	
	for (int i = 20; i <= 50; i++) {
		
		if (i % 2 == 0) {
			ciftToplam += i;
		} else {
			tekToplam += i;
		}
	}
	
	printf("Tek Toplam: %d\n", tekToplam);
	printf("Çift Toplam: %d\n", ciftToplam);
	
	return 0;
}


#include <stdio.h>


int main() {
	
	int A[2][2] = {
		{1, 2},
		{4, 5}
	};
	
	int B[2][2] = {
		{3, 4},
		{5, 6}
	};
	
	int TOPLAM[2][2] = {
		{0, 0},
		{0, 0}
	};
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			TOPLAM[i][j] = A[i][j] + B[i][j];
		}
	}
	
	
	
	//	Matris ekrana yazdırma
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d, ", TOPLAM[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

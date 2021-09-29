// Exercice 1

//#include <stdio.h>
//int main() {
//	int i, tableau[15];
//	for (i = 0; i < 15; i++) {
//		tableau[i] = i + 1;
//	}
//	for (i = 0; i < 15; i++) {
//		printf_s("%i ", tableau[i]);
//	}
//}

// Exercice 2

#include <stdio.h>
int main() {
	int i, tableau[10];
	printf_s("Entrez 10 valeurs entieres :\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%i", &tableau[i]);
	}
	printf_s("\n\nVos 10 valeurs sont :\n\n");
	for (i = 0; i < 10; i++) {
		printf_s("%i ", tableau[i]);
	}
	// ne marche pas, à revoir
	for (i = 0; i < 10; i++) {
		if (i % 2 ) {
			printf_s("%i ", tableau[i]);
		}
	}
	// est censé venir après, peut-être cassé aussi
	printf_s("\n\nLes cases du tableau dont les valeurs sont paires sont :\n\n");
	for (i = 0; i < 10; i++) {
		if (tableau[i] % 2) {
			printf_s("%i ", tableau[i]);
		}
	}
}
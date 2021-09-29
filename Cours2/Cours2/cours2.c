#include <stdio.h>
//int main() {
//	int i, j, n;
//	printf_s("Entrez un entier positif : \n");
//	scanf_s("%i", &n);
//	printf_s("\n");
//	for (i = 0; i < n && n > 0; i++) {
//		for (j = 0; j < n; j++) {
//			printf_s("*");
//		}
//		printf_s("\n");
//	}
//}

//int main() {
//	int i, j, n;
//	printf_s("Entrez un entier positif : \n");
//	scanf_s("%i", &n);
//	printf_s("\n");
//	while (n <= 0) {
//		printf_s("Entrez un entier positif : \n");
//		scanf_s("%i", &n);
//		printf_s("\n");
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf_s("*");
//		}
//		printf_s("\n");
//	}
//}

//int main() {
//	int i, j, n;
//	do {
//		printf_s("Entrez un entier positif : \n");
//		scanf_s("%i", &n);
//		printf_s("\n");
//	} while (n <= 0);
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf_s("*");
//		}
//		printf_s("\n");
//	}
//}

int main() {
	int i, j, n;
	do {
		printf_s("Entrez un entier positif : \n");
		scanf_s("%i", &n);
		printf_s("\n");
	} while (n <= 0);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf_s("*");
		}
		printf_s("\n");
	}
}
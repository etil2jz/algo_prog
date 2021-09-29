//#include <stdio.h>
//int main() {
//	int i, tableau[10];
//	for (i = 0; i < 10; i++) {
//		if (i % 2) {
//			tableau[i] = 5;
//		}
//		else {
//			tableau[i] = 10;
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		printf_s("%i\n", tableau[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int i, tableau[10];
//	for (i = 0; i < 10; i++) {
//		printf_s("Entrez la valeur de la case %i :\n", i+1);
//		scanf_s("%i", &tableau[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		printf_s("\nCase %i : %i", i+1, tableau[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		if (tableau[i] == 0) {
//			printf_s("\n\nLa case %i contient la valeur 0", i+1);
//		}
//	}
//}

#include <stdio.h>
int main() {
	int i;
	char t[100];
	printf_s("Saisissez une phrase :\n");
	fflush(stdin);
	gets(t);
	printf_s("\nVous avez saisi :\n%s\n", t);
	for (i = 0; t[i] != '\0'; i++) {
		
	}
}
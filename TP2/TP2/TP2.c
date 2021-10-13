// Exercice 1

//#include <stdio.h>
//int main() {
//	int i, j = 0, tab1[10], tab2[10];
//	for (i = 0; i < 10; i++) {
//		printf_s("\nEntrez l'entier %i du premier tableau :\n", i+1);
//		scanf_s("%i", &tab1[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		printf_s("\nEntrez l'entier %i du second tableau :\n", i + 1);
//		scanf_s("%i", &tab2[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		if (tab1[i] == tab2[i]) {
//			j++;
//		}
//	}
//	if (j == 10) {
//		printf_s("\nLes tableaux sont identiques\n");
//	}
//	else {
//		printf_s("\nLes tableaux ne sont pas identiques\n");
//	}
//}

// Exercice 2

//#include <stdio.h>
//int main() {
//	int i;
//	float tab[10], moyenne = 0;
//	for (i = 0; i < 10; i++) {
//		printf_s("\nEntrez la valeur %i :\n", i + 1);
//		scanf_s("%f", &tab[i]);
//	}
//	printf_s("\nVos valeurs sont :\n");
//	for (i = 0; i < 10; i++) {
//		printf_s("%f ", tab[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		moyenne += tab[i];
//	}
//	moyenne /= 2;
//	printf_s("\n\nLeur moyenne arithmetique est %f\n", moyenne);
//}

// Exercice 3 - à finir

#include <stdio.h>
int main() {
	int i, j = 0;
	char tab[150];
	printf_s("Saisissez une phrase d'au plus 150 caracteres :\n");
	fflush(stdin);
	gets(tab);
	for (i = 0; i < 150; i++) {
		if (tab[i] != "\0") {
			j++;
		}
	}
	printf_s("\nVotre phrase contient %i caracteres\n", j);
}
// ça marche pas faut corriger

// Exercice 4

//#include <stdio.h>
//int main() {
//	int i, j, k, tab[10];
//	printf_s("Entrez 10 entiers :\n");
//	for (i = 0; i < 10; i++) {
//		printf_s("\nEntier %i :\n", i + 1);
//		scanf_s("%i", &tab[i]);
//	}
//	printf_s("\nVotre tableau est :\n");
//	for (i = 0; i < 10; i++) {
//		printf_s("%i ", tab[i]);
//	}
//	for (i = 0; i < 9; i++) {
//		for (j = i + 1; j < 10; j++) {
//			if (tab[i] > tab[j]) {
//				k = tab[i];
//				tab[i] = tab[j];
//				tab[j] = k;
//			}
//		}
//	}
//	printf_s("\nVotre tableau trie est :\n");
//	for (i = 0; i < 10; i++) {
//		printf_s("%i ", tab[i]);
//	}
//}
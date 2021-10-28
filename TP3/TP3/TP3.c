// Exercice 1

//#include <stdio.h>
//
//float produitScalaire(float tab1[3], float tab2[3]) {
//	int i;
//	float x = 0;
//	for (i = 0; i < 3; i++) {
//		x += tab1[i] * tab2[i];
//	}
//	return x;
//}
//
//int main() {
//	int i;
//	float tab1[3], tab2[3], x;
//	printf_s("Entrez 3 valeurs reelles pour le tableau 1 :\n");
//	for (i = 0; i < 3; i++) {
//		scanf_s("%f", &tab1[i]);
//	}
//	printf_s("\nEntrez 3 valeurs reelles pour le tableau 2 :\n");
//	for (i = 0; i < 3; i++) {
//		scanf_s("%f", &tab2[i]);
//	}
//	x = produitScalaire(tab1, tab2);
//	printf_s("\nLeur produit scalaire est %f\n", x);
//}

// Exercice 2

//#include <stdio.h>
//
//int main() {
//	int i, tab1[10], tab2[10], tab3[10];
//	printf_s("Entrez 10 entiers pour le tableau 1 :\n");
//	for (i = 0; i < 10; i++) {
//		scanf_s("%i", &tab1[i]);
//	}
//	printf_s("\nEntrez 10 entiers pour le tableau 2 :\n");
//	for (i = 0; i < 10; i++) {
//		scanf_s("%i", &tab2[i]);
//	}
//	printf_s("\nVotre tableau 1 est :\n");
//	for (i = 0; i < 10; i++) {
//		printf_s("%i ", tab1[i]);
//	}
//	printf_s("\n\nVotre tableau 2 est :\n");
//	for (i = 0; i < 10; i++) {
//		printf_s("%i ", tab2[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		tab3[i] = tab1[i] + tab2[i];
//	}
//	printf_s("\n\nLe tableau final est donc :\n");
//	for (i = 0; i < 10; i++) {
//		printf_s("%i ", tab3[i]);
//	}
//}

// Exercice 3

//#include <stdio.h>
//
//int main() {
//	int i, tab[20], deb, fin, indice = 0, min;
//	printf_s("Entrez un tableau de 20 entiers :\n");
//	for (i = 0; i < 20; i++) {
//		scanf_s("%i", &tab[i]);
//	}
//	do {
//		printf_s("\nEntrez un entier de debut compris entre 0 et 19 :\n");
//		scanf_s("%i", &deb);
//		printf_s("\nEntrez un entier de fin compris entre 0 et 19 :\n");
//		scanf_s("%i", &fin);
//	} while (deb < 0 || deb > 19 || fin < deb || fin > 19);
//	min = tab[0];
//	for (i = deb; i <= fin; i++) {
//		if (min > tab[i]) {
//			min = tab[i];
//			indice = i;
//		}
//	}
//	printf_s("\nL'indice de la valeur minimale de l'intervalle de ce tableau est %i\n", indice);
//}

// Exercice 4

#include <stdio.h>

void saisie(char texte[150]) {
	printf_s("\nEntrez une chaine de caracteres (max 150) :\n");
	fflush(stdin);
	gets(texte);
}

void affichage(char texte[]) {
	printf_s("\nVotre phrase est %s\n", texte);
}

int main() {
	char texte[150];
	saisie(texte);
	affichage(texte);

}
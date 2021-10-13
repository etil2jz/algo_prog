// Exercice 1

//#include <stdio.h>
//int main() {
//	float valeur_hors_taxes, valeur_toutes_taxes, taux_TVA;
//	printf_s("Entrez la valeur hors taxes :\n");
//	scanf_s("%f", &valeur_hors_taxes);
//	printf_s("\nEntrez le taux de TVA :\n");
//	scanf_s("%f", &taux_TVA);
//	valeur_toutes_taxes = valeur_hors_taxes * taux_TVA;
//	printf_s("\nVotre valeur toutes taxes est : %f", valeur_toutes_taxes);
//}

// Exercice 2

//#include <stdio.h>
//int main() {
//	int a, b;
//	printf_s("Entrez un entier a :\n");
//	scanf_s("%i", &a);
//	printf_s("\nEntrez un entier b :\n");
//	scanf_s("%i", &b);
//	if (a > b) {
//		printf_s("\n%i est plus grand que %i", a, b);
//	}
//	else if (a < b) {
//		printf_s("\n%i est plus grand que %i", b, a);
//	}
//	else {
//		printf_s("\na et b ont la meme valeur");
//	}
//}

// Exercice 3

//#include <stdio.h>
//int main() {
//	int rep1, rep2;
//	printf_s("Tapez 1 si vous etes un homme, 2 si vous etes une femme :\n");
//	scanf_s("%i", &rep1);
//	if (rep1 == 1) {
//		printf_s("\nEtes-vous marie ? Tapez 1 pour oui, 2 pour non :\n");
//		scanf_s("%i", &rep2);
//		switch (rep2) {
//		case 1: printf_s("\nBonjour Monsieur");
//			break;
//		case 2: printf_s("\nBonjour Monsieur");
//			break;
//		default: printf_s("\nErreur de saisie\n");
//		}
//	}
//	else {
//		printf_s("\nEtes-vous marie ? Tapez 1 pour oui, 2 pour non :\n");
//		scanf_s("%i", &rep2);
//		switch (rep2) {
//		case 1: printf_s("\nBonjour Madame");
//			break;
//		case 2: printf_s("\nBonjour Mademoiselle");
//			break;
//		default: printf_s("\nErreur de saisie\n");
//		}
//	}
//}

// Exercice 4

//#include <stdio.h>
//int main() {
//	int a, b, c, d;
//	printf_s("Entrez l'entier de la variable a :\n");
//	scanf_s("%i", &a);
//	printf_s("\nEntrez l'entier de la variable b :\n");
//	scanf_s("%i", &b);
//	c = a;
//	d = b;
//	a = d;
//	b = c;
//	printf_s("\nVotre variable a vaut desormais %i et votre variable b vaut desormais %i", a, b);
//}

// Exercice 5

//#include <stdio.h>
//int main() {
//	int a, i, somme = 0;
//	printf_s("De combien de premiers entiers voulez-vous la somme ?\n");
//	scanf_s("%i", &a);
//	for (i = 1; i <= a; i++) {
//		somme += i;
//	}
//	printf_s("\nLa somme des %i premiers entiers est %i", a, somme);
//}

// Exercice 6

#include <stdio.h>
int main() {
	int a, b, c, d, e, f = 1;
	printf_s("Entrez la hauteur de la branche :\n");
	scanf_s("%i", &a);
	c = a;
	for (b = 0; b < a; b++) {
		c -= 1;
		for (d = 0; d < c; d++) {
			printf_s(" ");
		}
		for (e = 0; e < f; e++) {
			printf_s("*");
		}
		f += 2;
		printf_s("\n");
	}
	c = a - 2;
	for (d = 0; d < 2; d++) {
		for (b = 0; b < c; b++) {
			printf_s(" ");
		}
		printf_s("***\n");
	}
}
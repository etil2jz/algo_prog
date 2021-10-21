// Exercice 1 - à faire mais il est très long...

//#include <stdio.h>
//
//int main() {
//	int rep2 = 1;
//	printf_s("Bienvenue !");
//	while (rep2 == 1) {
//
//	}
//}

// Exercice 2

//#include <stdio.h>
//
//int saisiePositif() {
//	int x;
//	do {
//		printf_s("\nEntrez une valeur entiere positive :\n");
//		scanf_s("%i", &x);
//	} while (x <= 0);
//	return x;
//}
//
//void affiche(int a) {
//	printf_s("\nVous avez saisi %i\n\n", a);
//}
//
//void table_multi(int a) {
//	int i, multi;
//	for (i = 1; i <= 12; i++) {
//		multi = a * i;
//		printf_s("%i x %i = %i\n", a, i, multi);
//	}
//}
//
//void factorielle(int a) {
//	int i, fact = 1;
//	for (i = 1; i <= a; i++) {
//		fact *= i;
//	}
//	printf_s("\nLa factorielle de %i est %i\n", a, fact);
//}
//
//int main() {
//	int a = saisiePositif();
//	affiche(a);
//	table_multi(a);
//	factorielle(a);
//}

// Exercice 3 - à faire

//#include <stdio.h>
//
//int main() {
//
//}

// Exercice 4

#include <stdio.h>

int saisie() {
	int x;
	printf_s("\nEntrez un entier x :\n");
	scanf_s("%i", &x);
	return x;
}

int main() {
	int x1 = saisie(), x2 = saisie();
}
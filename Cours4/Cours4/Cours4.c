//#include <stdio.h>
//void affichage(int a, int b) {
//	printf_s("\nVous avez saisi %i et %i\n", a, b);
//}
//void calculeProduit(int a, int b) {
//	printf_s("\nLe produit de ces deux entiers est %i\n", a * b);
//}
//int main() {
//	int a, b;
//	printf_s("Entrez 2 entiers :\n");
//	scanf_s("%i%i", &a, &b);
//	affichage(a, b);
//	calculeProduit(a, b);
//}

//#include <stdio.h>
//int saisie() {
//	int v;
//	printf_s("Entrez une valeur :\n");
//	scanf_s("%i", &v);
//	return v;
//}
//int calculeDouble(int x) {
//	return 2 * x;
//}
//int main() {
//	int d, val;
//	val = saisie();
//	d = calculeDouble(val);
//	printf_s("\nLe resultat est %i\n", d);
//}

//#include <stdio.h>
//int saisie() {
//	int x;
//	printf_s("\nEntrez un entier :\n");
//	scanf_s("%i", &x);
//	return x;
//}
//int calculeSomme(int x, int y) {
//	return x + y;
//}
//int calculeDouble(int x) {
//	return 2 * x;
//}
//int main() {
//	int a, b, somme, calcDouble;
//	a = saisie();
//	b = saisie();
//	somme = calculeSomme(a, b);
//	printf_s("\nLa somme de %i et %i est %i\n", a, b, somme);
//	calcDouble = calculeDouble(somme);
//	printf_s("\nLe double de %i est %i\n", somme, calcDouble);
//}

//#include <stdio.h>
//
//void saisie(int tab[]) {
//	int i;
//	for (i = 0; i < 10; i++) {
//		printf_s("\nValeur numero %i :\n", i + 1);
//		scanf_s("%i", &tab[i]);
//	}
//}
//
//void affiche(int tab[]) {
//	int i;
//	printf_s("\nVotre tableau est :\n");
//	for (i = 0; i < 10; i++) {
//		printf_s("%i ", tab[i]);
//	}
//	printf_s("\n");
//}
//
//void entierPresent(int tab[]) {
//	int i, a;
//	printf_s("\nEntrez un entier :\n");
//	scanf_s("%i", &a);
//	for (i = 0; i < 10; i++) {
//		if (tab[i] == a) {
//			printf_s("\nVotre entier est present dans le tableau, case numero %i\n", i + 1);
//		}
//	}
//}
//
//void valeurCase(int tab[]) {
//	int a, nCase;
//	printf_s("\nEntrez une valeur :\n");
//	scanf_s("%i", &a);
//	do {
//		printf_s("\nEntrez la case ou vous souhaitez le placer :\n");
//		scanf_s("%i", &nCase);
//		nCase -= 1;
//	} while (nCase < 0 || nCase > 9);
//	tab[nCase] = a;
//}
//
//void echangeCase(int tab[]) {
//	int nCase1, nCase2, x;
//	do {
//		printf_s("\nEntrez le numero de case 1 a echanger :\n");
//		scanf_s("%i", &nCase1);
//		nCase1 -= 1;
//		printf_s("\nEntrez le numero de case 2 a echanger :\n");
//		scanf_s("%i", &nCase2);
//		nCase2 -= 1;
//	} while (nCase1 < 0 || nCase1 > 9 || nCase2 < 0 || nCase2 > 9);
//	x = tab[nCase1];
//	tab[nCase1] = tab[nCase2];
//	tab[nCase2] = x;
//}
//
//int main() {
//	int tab[10];
//	saisie(tab);
//	affiche(tab);
//	entierPresent(tab);
//	valeurCase(tab);
//	affiche(tab);
//	echangeCase(tab);
//	affiche(tab);
//}

#include <stdio.h>

void saisie(float tab[]) {
	int i;
	for (i = 0; i < 15; i++) {
		printf_s("\nValeur numero %i :\n", i + 1);
		scanf_s("%f", &tab[i]);
	}
}
	
void affiche(float tab[]) {
	int i;
	printf_s("\nVotre tableau est :\n");
	for (i = 0; i < 15; i++) {
		printf_s("%f ", tab[i]);
	}
	printf_s("\n");
}

void superieurZero(float tab[]) {
	int i;
	for (i = 0; i < 15; i++) {
		if (tab[i] > 0) {
			printf_s("\nLa case %i de valeur %f est superieure a 0\n", i + 1, tab[i]);
		}
	}
}

void valMin(float tab[]) {
	int i;
	float min = tab[0];
	for (i = 0; i < 15; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
	}
	printf_s("\nLa valeur minimum du tableau est %f\n", min);
}

void caseMax(float tab[]) { // broken -> need to fix
	int i, nCase;
	float max = tab[0];
	for (i = 0; i < 15; i++) {
		if (tab[i] > max) {
			max = tab[i];
			nCase = i;
		}
	}
	printf_s("\nLa valeur maximum du tableau se situe case %i\n", nCase);
}

float calcMoyenne(float tab[]) {
	int i;
	float x = 0;
	for (i = 0; i < 15; i++) {
		x += tab[i];
	}
	return x / 15;
}

void moyenne(float x) {
	printf_s("\nLa moyenne du tableau est %f\n", x);
}

void infMoyenne(float tab[], float x) {
	int i, a = 0;
	for (i = 0; i < 15; i++) {
		if (tab[i] < x) {
			a += 1;
		}
	}
	printf_s("\nIl y a %i valeurs inferieures a la moyenne\n", a);
}

int main() {
	float tab[15];
	saisie(tab);
	affiche(tab);
	superieurZero(tab);
	valMin(tab);
	caseMax(tab);
	moyenne(calcMoyenne(tab));
	infMoyenne(tab, calcMoyenne(tab));
}
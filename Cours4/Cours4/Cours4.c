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

#include <stdio.h>
int saisie() {
	int x;
	printf_s("\nEntrez un entier :\n");
	scanf_s("%i", &x);
	return x;
}
int calculeSomme(int x, int y) {
	return x + y;
}
int calculeDouble(int x) {
	return 2 * x;
}
int main() {
	int a, b, somme, calcDouble;
	a = saisie();
	b = saisie();
	somme = calculeSomme(a, b);
	printf_s("\nLa somme de %i et %i est %i\n", a, b, somme);
	calcDouble = calculeDouble(somme);
	printf_s("\nLe double de %i est %i\n", somme, calcDouble);
}
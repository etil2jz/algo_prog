// Exercice 1

//#include <stdio.h>
//
//typedef struct couple {
//	int x, y;
//} couple;
//
//couple saisie() {
//	couple c;
//	printf_s("\nEntrez un premier entier x :\n");
//	scanf_s("%i", &c.x);
//	printf_s("\nEntrez un second entier y :\n");
//	scanf_s("%i", &c.y);
//	return c;
//}
//
//void affiche(couple c) {
//	printf_s("\n(%i, %i)\n", c.x, c.y);
//}
//
//void comparaison(couple c1, couple c2) {
//	if (c1.x > c2.x || (c1.x == c2.x && c1.y > c2.y)) {
//		printf_s("\nLe couple (%i, %i) est plus grand que le couple (%i, %i)\n", c1.x, c1.y, c2.x, c2.y);
//	}
//	else {
//		printf_s("\nLe couple (%i, %i) est plus grand que le couple (%i, %i)\n", c2.x, c2.y, c1.x, c1.y);
//	}
//}
//
//int main() {
//	couple c1, c2;
//	c1 = saisie();
//	affiche(c1);
//	c2 = saisie();
//	affiche(c2);
//	comparaison(c1, c2);
//}

// Exercice 2 - problème sur affichage valeur min

//#include <stdio.h>
//
//typedef struct couple {
//	int x[10], y[10];
//} couple;
//
//couple saisie() {
//	int i;
//	couple c;
//	for (i = 0; i < 10; i++) {
//		printf_s("\nEntrez un premier entier x :\n");
//		scanf_s("%i", &c.x[i]);
//		printf_s("\nEntrez un second entier y :\n");
//		scanf_s("%i", &c.y[i]);
//	}
//	return c;
//}
//
//void affiche(couple c) {
//	int i;
//	printf_s("\nVotre tableau de couples est :\n");
//	for (i = 0; i < 10; i++) {
//		printf_s("\n(%i, %i)\n", c.x[i], c.y[i]);
//	}
//}
//
//void valMin(couple c) {
//	int i, minX = 0, minY = 0;
//	for (i = 0; i < 10; i++) {
//		if (c.x[i] > c.x[i + 1] || (c.x[i] == c.x[i + 1] && c.y[i] > c.y[i + 1])) {
//			minX = c.x[i + 1];
//			minY = c.y[i + 1];
//		}
//	}
//	printf_s("\nLe couple de valeur minimale du tableau est (%i, %i)\n", minX, minY);
//}
//
//int main() {
//	couple A;
//	A = saisie();
//	affiche(A);
//	valMin(A);
//}

// Exercice 3

typedef struct garage {

} garage;
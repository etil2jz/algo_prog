// Exercice 1

#include <stdio.h>

typedef struct livre {
	char auteur[100], emprunteur[100], titre[100];
	int nbrPages;
} livre;

livre saisie() {
	int i;
	livre x;
	for (i = 0; i < 50; i++) {
		printf_s("\nEnrez le titre du livre %i :\n", i + 1);
		fflush(stdin);
		gets(x.titre);
		printf_s("\nEntrez l'auteur du livre %i :\n", i + 1);
		fflush(stdin);
		gets(x.auteur);
		printf_s("\nEntrez le nombre de pages du livre %i :\n", i + 1);
		fflush(stdin);
		scanf_s("%i", &x.nbrPages);
		printf_s("\nEntrez le NOM de l'emprunteur du livre %i :\n", i + 1);
		fflush(stdin);
		gets(x.emprunteur);
		return x;
	}
}

int main() {
	livre bibliotheque;
	bibliotheque = saisie();
}
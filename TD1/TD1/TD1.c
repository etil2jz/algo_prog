// Exercice 1

//#include <stdio.h>
//int main() {
//	int a; // variable entier de l'utilisateur
//	int i; // variable pour effectuer la boucle for
//	int rep; // variable pour la réponse sur le switch
//	float somme; // variable pour calculer la somme
//	int rep2 = 1; // variable pour recommencer le programme
//	printf_s("Bienvenue !");
//	while (rep2 == 1) {
//		printf_s("\nEntrez une valeur entiere :\n");
//		scanf_s("%i", &a);
//		printf_s("Vous avez saisi %i\n", a);
//		int dou = a * 2; // variable pour calculer le double
//		int tri = a * 3; // variable pour calculer le triple
//		int opp = a * -1; // variable pour calculer l'opposé
//		// vérification si valeur positive ou négative
//		if (a > 0) {
//			printf_s("\nCette valeur est positive\n");
//		}
//		else {
//			if (a < 0) {
//				printf_s("\nCette valeur est negative\n");
//			}
//		}
//		// vérification si valeur entre 5 et 20, inférieure à 5 ou supérieure à 20
//		if (a >= 5 && a <= 20) {
//			printf_s("\nCette valeur est comprise entre 5 et 20\n");
//		}
//		else {
//			if (a < 5) {
//				printf_s("\nCette valeur est inferieure a 5\n");
//			}
//			else {
//				printf_s("\nCette valeur est superieure a 20\n");
//			}
//		}
//		// si valeur positive, afficher son double
//		if (a > 0) {
//			printf_s("\nSon double est %i\n", dou);
//		}
//		else {
//			// si valeur négative, afficher son opposé
//			if (a < 0) {
//				a -= a * 2;
//				printf_s("\nSon oppose est %i\n", a);
//			}
//		}
//		//printf_s("\nTapez 1 pour faire le double, 2 pour faire le triple, 3 pour afficher l'oppose :\n");
//		//scanf_s("%i", &rep);
//		//while (rep < 1 || rep>3) {
//		//	printf_s("\nTapez 1 pour faire le double, 2 pour faire le triple, 3 pour afficher l'oppose :\n");
//		//	scanf_s("%i", &rep);
//		//}
//
//		// la boucle du dessus est une alternative à celle du dessous
//		do {
//			printf_s("\nTapez 1 pour faire le double, 2 pour faire le triple, 3 pour afficher l'oppose :\n");
//			scanf_s("%i", &rep);
//		} while (rep < 1 || rep > 3);
//		switch (rep) {
//		case 1: printf_s("\nLe double est %i\n", dou);
//			break;
//		case 2: printf_s("\nLe triple est %i\n", tri);
//			break;
//		case 3: printf_s("\nL'oppose est %i\n", opp);
//			break;
//		default: printf_s("\nErreur de saisie\n");
//		}
//		// afficher toutes les valeurs entre 1 et a
//		printf_s("\nLes nombres compris entre 1 et %i sont :\n", a);
//		for (i = 1; i <= a; i++) {
//			printf_s("%i ", i);
//		}
//		// vérification avant d'afficher multiples de 3, car aucun multiple en dessous de 3
//		if (a < 3) {
//			printf_s("\n\nAucun multiple de 3 pour %i\n", a);
//		}
//		else {
//			printf_s("\n\nLes multiples de 3 compris entre 1 et %i sont :\n", a);
//			for (i = 1; i <= a; i++) {
//				if (i % 3 == 0) {
//					printf_s("%i ", i);
//				}
//			}
//			// afficher nombre de multiples de 3
//			printf_s("\n\nIl y a %i multiples de 3 compris entre 1 et %i\n", a / 3, a);
//		}
//		// calculer la somme
//		somme = 0;
//		for (i = 1; i <= a; i++) {
//			somme += i;
//		}
//		// afficher la somme et la moyenne de celle-ci
//		printf_s("\nLa somme des entiers compris entre 1 et %i est %f\n", a, somme);
//		printf_s("\nLa moyenne de ces valeurs est %f\n", somme / a);
//		// boucle avec switch pour effectuer à nouveau les opérations du dessus
//		do {
//			printf_s("\nTapez :\n1 pour afficher les nombres entiers compris entre 1 et %i\n2 pour afficher les multiples de 3 compris entre 1 et %i\n3 pour afficher la somme des entiers compris entre 1 et %i\n4 pour afficher la moyenne de la somme des entiers compris entre 1 et %i\n", a, a, a, a);
//			scanf_s("%i", &rep);
//		} while (rep < 1 || rep > 4);
//		switch (rep) {
//		case 1: printf_s("\nLes nombres compris entre 1 et %i sont :\n", a);
//			for (i = 1; i <= a; i++) {
//				printf_s("%i ", i);
//			}
//			break;
//		case 2: if (a < 3) {
//			printf_s("\nAucun multiple de 3 pour %i\n", a);
//		}
//			  else {
//			printf_s("\nLes multiples de 3 compris entre 1 et %i sont :\n", a);
//			for (i = 1; i <= a; i++) {
//				if (i % 3 == 0) {
//					printf_s("%i ", i);
//				}
//			}
//		}
//			  break;
//		case 3: printf_s("\nLa somme des entiers compris entre 1 et %i est %f\n", a, somme);
//			break;
//		case 4: printf_s("\nLa moyenne de ces valeurs est %f\n", somme / a);
//			break;
//		default: printf_s("\nErreur de saisie\n");
//		}
//		printf_s("\nSouhaitez-vous recommencer le programme ? Tapez\n1 pour recommencer\n2 pour arreter\n");
//		scanf_s("%i", &rep2);
//	}
//	printf_s("\nAu revoir !\n");
//}

// Exercice 2

//#include <stdio.h>
//int main() {
//	int a; // variable pour entier de l'utilisateur
//	int i; // variable pour boucle for
//	int table_multi; // variable pour faire les tables de multiplication
//	int factorielle = 1; // variable pour la factorielle
//	// boucle pour obliger l'utilisateur à entrer une valeur positive
//	do {
//		printf_s("Entrez une valeur entiere positive :\n");
//		scanf_s("%i", &a);
//	} while (a <= 0);
//	printf_s("Vous avez saisi %i\n\n", a);
//	// boucle pour afficher les tables de multiplication jusque 12 de a
//	for (i = 1; i <= 12; i++) {
//		table_multi = a * i;
//		printf_s("%i x %i = %i\n", a, i, table_multi);
//	}
//	// boucle pour afficher la factorielle de a
//	for (i = 1; i <= a; i++) {
//		factorielle *= i;
//	}
//	printf_s("\nLa factorielle de %i est %i\n", a, factorielle);
//}

// Exercice 3

//#include <stdio.h>
//int main() {
//	int a, b, i = 2; // variables pour la succession d'entiers
//	printf_s("Entrez un entier :\n");
//	scanf_s("%i", &a);
//	printf_s("\nVous avez saisi %i\n\nEntrez un entier succedant a %i\n", a, a);
//	scanf_s("%i", &b);
//	while (a < b) {
//		a = b;
//		printf_s("\nEntrez un entier succedant a %i :\n", b);
//		scanf_s("%i", &b);
//		printf_s("\nVous avez saisi %i\n", b);
//		i++;
//	}
//	printf_s("\n%i ne succede pas a %i\n", b, a);
//	printf_s("\nVous avez saisi %i valeurs\n", i);
//}

// Exercice 4

#include <stdio.h>
int main() {
	int rep, boucle = 1, x1, x2, i;
	while (boucle == 1) {
		printf_s("Entrez un entier x1 :\n");
		scanf_s("%i", &x1);
		printf_s("\nEntrez un entier x2 :\n");
		scanf_s("%i", &x2);
		do {
			printf_s("\nTapez 1 pour leur somme, 2 pour leur produit, 3 pour afficher les entiers compris entre %i et %i, 4 pour arreter\n", x1, x2);
			scanf_s("%i", &rep);
			switch (rep) {
			case 1: printf_s("\nLa somme de %i et %i est %i\n", x1, x2, x1 + x2);
				break;
			case 2: printf_s("\nLe produit de %i et %i est %i\n", x1, x2, x1 * x2);
				break;
			case 3: printf_s("\n");
				for (i = x1; i <= x2; i++) {
				printf_s("%i ", i);
			}
				printf_s("\n");
				break;
			case 4: boucle = 2;
			}
		} while (rep < 1 || rep > 4);
	}
}
/*****************************************************************************/
/*** fichier: testmax.c                                                    ***/
/*** Création et initialisation d'un tableau de 5 éléments                 ***/
/*****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "max.h"

int main()
{
	int N;
	double max, tab[10];

	printf('Nombre d\'entiers ? ");
	scanf("%d", &N);

	calcul_max(tab, N, &max);
	printf("Max = %f\n", max);

	return 0;
}

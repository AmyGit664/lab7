/*****************************************************************************/
/*** fichier: max.c                                                        ***/
/*** Calcul de la valeur max d'un tableau contenant N entiers              ***/
/*****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "max.h"

void calcul_max(double *tab, int N, double *max)
{
	double val_max;
	int i;
	val_max = tab[0];
	for (i=0; i<N; i++)
	{
		if (tab[i] > val_max)
		{
			val_max = tab[i];
		}
	}
	*max = val_max;
}


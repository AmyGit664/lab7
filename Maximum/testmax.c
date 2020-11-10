/*****************************************************************************/
/*** fichier: testmax.c                                                    ***/
/*** Calcul de max                                                         ***/
/*****************************************************************************/

#include <stdio.h>
#include "max.h"

#define nb_val 5

int main ()
{
        int i, max;
	int table[nb_val] = {2, 5, 7, 2, 9};

	for (i=0; i<nb_val; i++)
		printf("table[%d] = %d\n", i, table[i]);
	printf("\n");

        calcul_max(table, nb_val, &max);
        printf("Max = %d\n", max);

        return 0;
}

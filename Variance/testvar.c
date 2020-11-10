/*****************************************************************************/
/*** fichier: testvar.c                                                    ***/
/*** Calcul de variance                                                    ***/
/*****************************************************************************/

#include <stdio.h>
#include <math.h>
#include "var.h"

#define nb_val 5

int main ()
{
        int i;
	float var;
        int table[nb_val] = {2, 5, 7, 2, 9};

        for (i=0; i<nb_val; i++)
                printf("table[%d] = %d\n", i, table[i]);
        printf("\n");

        variance(table, nb_val, &var);
        printf("La variance du tableau est: %f\n", var);

        return 0;

}


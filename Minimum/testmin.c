/*****************************************************************************/
/*** fichier: testmin.c                                                    ***/
/*** Calcul de min                                                         ***/
/*****************************************************************************/

#include <stdio.h>
#include "min.h"

#define nb_val 5

int main ()
{
        int i, min;
        int table[nb_val] = {2, 5, 7, 2, 9};

        for (i=0; i<nb_val; i++)
                printf("table[%d] = %d\n", i, table[i]);
        printf("\n");

        calcul_min(table, nb_val, &min);
        printf("Min = %d\n", min);

        return 0;

}

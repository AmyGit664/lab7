/*****************************************************************************/
/*** fichier: max_min_var.c                                                ***/
/*** Calcul des max, min et variance d'un tableau contenant N entiers      ***/
/*****************************************************************************/


#include <stdio.h>
#include <math.h>
#include "max_min_var.h"

/* Calcul du max */

void calcul_max (int *tab, int nb, int *pmax){

        int val_max;
        int i;
        val_max = tab[0];

        for (i=0; i<nb; i++)
        {
                if (tab[i] > val_max)
                        val_max = tab[i];
        }
        *pmax = val_max;
}


/* Calcul du min */

void calcul_min (int *tab, int nb, int *pmin){

        int val_min;
        int i;
        val_min = tab[0];

        for (i=0; i<nb; i++)
        {
                if (tab[i] < val_min)
                        val_min = tab[i];
        }
        *pmin = val_min;
}

/* Calcul de la variance */

void variance(int *tab, int nb, float *var)
{
        double moyenne;
        int som, i;
        som = 0;
        for (i=0; i<nb; i++)
        {
                som = som + tab[i];
        }
        moyenne = som / nb;
        printf("La moyenne des valeurs du tableau est: %f\n", moyenne);

        double somme;
        float pvar;
        somme = 0;
        for (i=0; i<nb; i++)
        {
                somme = somme + (tab[i] - moyenne)*(tab[i] - moyenne);
        }
        pvar = somme / nb;
        *var = pvar;

}

                                 

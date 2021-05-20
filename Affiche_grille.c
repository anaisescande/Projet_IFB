//
// Created by Aubin Bnf on 20/05/2021.
//
#include <stdio.h>
#include "Affiche_grille.h"

void show_grid(Grid grille_affiche){
    int j, b;

    printf("   1  2  3  4  5  6  7  8  9  10\n");
    for(j = 0; j < 10; j++){
        for(b = 0; b <= 10; b++){
            printf("%c", grille_affiche.grille[j][b]);
            printf("  ");
        }
        printf("\n");
    }
}
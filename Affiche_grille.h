//
// Created by Aubin Bnf on 20/05/2021.
//

#ifndef PROJET_IFB4_AFFICHE_GRILLE_H
#define PROJET_IFB4_AFFICHE_GRILLE_H

typedef struct{
    char grille[10][11];
    int hauteur;
    int largeur;
}Grid;

/**
 * Affiche la grille
 * @param grille_affiche
 */
void show_grid(Grid grille_affiche);

#endif //PROJET_IFB4_AFFICHE_GRILLE_H

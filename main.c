#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Affiche_grille.h"


typedef struct {
    int position_x;
    int position_y;
    int taille;
    char orientation;
}Boat;

int main() {
    Grid grille_affiche, grille_bateau;
    int j, b, a;
    Boat bateau[5];
    int orientation, i;


    srand(time(0));

    bateau[0].taille = 5;
    bateau[1].taille = 4;
    bateau[2].taille = 3;
    bateau[3].taille = 3;
    bateau[4].taille = 2;

    for (i = 0; i < 5; i++) {

        orientation = rand() % 2;
        switch (orientation) {
            case 0:
                bateau[i].orientation = 'H';
                bateau[i].position_x = rand() % (10 - bateau[i].taille) ;
                bateau[i].position_y = rand() % 10 ;
                break;
            case 1:
                bateau[i].orientation = 'V';
                bateau[i].position_x = rand() % 10 ;
                bateau[i].position_y = rand() % (10 - bateau[i].taille) ;
            default:
                break;
        }

        printf("La position du bateau de taille %d est (%d,%c) en orientation %c\n",
               bateau[i].taille, bateau[i].position_x+1, 'A'+bateau[i].position_y, bateau[i].orientation);

    }

    for(j = 0; j < 10; j++){
        for(b = 0; b <= 10; b++){
            if(b > 0){
                grille_affiche.grille[j][b] = '_';
            }else{
                grille_affiche.grille[j][b] = 'A' + j;
            }
        }

    }
    show_grid(grille_affiche);

    for(j = 0; j < 10; j++){
        for(b = 0; b <= 10; b++){
            if(b > 0){
                grille_bateau.grille[j][b] = '_';
            }else{
                grille_bateau.grille[j][b] = 'A' + j;
            }
        }

    }

    for(a = 0; a < 5; a++){
        if(bateau[a].orientation == 'H'){


                    for (b =  0; b < bateau[a].taille ; b++){
                        grille_bateau.grille[bateau[a].position_y][b+bateau[a].position_x+1] = 'X';
                    }


        }else{

                    for (j = 0; j < bateau[a].taille; j++){
                        grille_bateau.grille[j+bateau[a].position_y][bateau[a].position_x+1] = 'X';
                    }

        }
    }

    show_grid(grille_bateau);
    return 0;
}


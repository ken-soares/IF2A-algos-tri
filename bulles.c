#include <stdio.h>

#define TAILLE_TABLEAU 6

void afficher_tableau(int tableau[], int taille_tableau){
    for(int i = 0; i < taille_tableau; i++){
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

void bulles(int tableau[], int taille_tableau){
    int tmp = 0;
    for(int i = 0; i < taille_tableau-1; i++){
        for(int j = 0; j < taille_tableau - i-1; j++){
            if(tableau[j+1] < tableau[j]){
                tmp = tableau[j];
                tableau[j] = tableau[j+1];
                tableau[j+1] = tmp;
            }
        }
    }
    afficher_tableau(tableau, TAILLE_TABLEAU);
}

int main(void){
    int tableau[TAILLE_TABLEAU] = {5,4,9,6,3,1};
    afficher_tableau(tableau, TAILLE_TABLEAU);
    bulles(tableau, TAILLE_TABLEAU);
    return 0;
}

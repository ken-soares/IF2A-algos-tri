#include <stdio.h>

#define TAILLE_TABLEAU 6

void afficher_tableau(int tableau[], int taille_tableau){
    for(int i = 0; i < taille_tableau; i++){
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

void selection_algo(int tableau[], int taille_tableau){
    int mini = 0;
    int tmp = 0;

    for(int i = 0; i < taille_tableau-1; i++){
        mini = i;
        for(int j = i+1; j < taille_tableau;j++){

            if(tableau[j] < tableau[mini])
                mini = j;
        }
        if(mini != i){
            tmp = tableau[i];
            tableau[i] = tableau[mini];
            tableau[mini] = tmp;
        }
    }
    afficher_tableau(tableau, TAILLE_TABLEAU);
}


int main(void){
    int tableau[TAILLE_TABLEAU] = {5,4,9,6,3,1};
    afficher_tableau(tableau, TAILLE_TABLEAU);
    selection_algo(tableau, TAILLE_TABLEAU);
    return 0;
}

#include <stdio.h>

#define TAILLE_TABLEAU 6

void afficher_tableau(int tableau[], int taille_tableau){
    for(int i = 0; i < taille_tableau; i++){
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

void insertion(int t[], int taille_t){
    int j, x = 0;

    for(int i = 1; i < taille_t;i++){
        x = t[i];
        j = i;
        while(j > 0 && t[j-1] > x){
            t[j] = t[j-1];
            j = j - 1;
        }

        t[j] = x;
    }
    afficher_tableau(t, TAILLE_TABLEAU);
}

int main(void){
    int tableau[TAILLE_TABLEAU] = {5,4,9,6,3,1};
    afficher_tableau(tableau, TAILLE_TABLEAU);
    insertion(tableau, TAILLE_TABLEAU);
    return 0;
}

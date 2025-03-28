#include <stdio.h>

#define maxDimension 3 //maksimalna dimnezija matrice cemo ben povecat

void unosMatrice(int matrix[maxDimension][maxDimension], int matrixDimension, char ime){
    printf("Unesite elemente matrice %c (%dx%d):\n", ime, matrixDimension, matrixDimension);
    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            printf("%c[%d][%d], ime");
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ispisMatrice(int matrix[maxDimension][maxDimension], int matrixDimension){
    //printf("Zadana matrica %c:\n", ime);
    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void zbrojiMatrice(int matrixA[maxDimension][maxDimension], int matrixB[maxDimension][maxDimension], int matrixC[maxDimension][maxDimension], int matrixDimension){
    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

//ne pokreci dok ne finis funckije zasebne

int main(){
    int matrixDimension;
    int matrixA[maxDimension][maxDimension], matrixB[maxDimension][maxDimension], sum[maxDimension][maxDimension], diff[maxDimension][maxDimension];

    printf("Unesite dimenziju matrice (1, 2 ili 3): ");
    scanf("%d", &matrixDimension);

   /* if(matrixDimension < 1 || matrixDimension > 3){
        printf("Neispravna dimenzija matrice \n");
        return 0;
    }*/

    printf("Unesite elemente prve matrice %dx%d:\n", matrixDimension, matrixDimension);
    for (int i = 0; i < matrixDimension; i++){
        for (int j = 0; j < matrixDimension; j++){
            //printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Zadana prva matrica:\n");
    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("Unesite elemente druge matrice %dx%d:\n", matrixDimension, matrixDimension);
    for (int i = 0; i < matrixDimension; i++){
        for (int j = 0; j < matrixDimension; j++){
            //printf("Element [%d][%d]: ", i + 1, j + 1); prikaz elementa 
            scanf("%d", &matrixB[i][j]);
        }
    }

    printf("Zadana druga matrica:\n");
    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }

    int odabirOperacije = -1;
    printf("Operacije: \n 1.Zbrajanje \n 2.Oduzimanje");
    int flag = 1;

    while(flag){
        printf("\nOdaberite operaciju: ");
        scanf("%d", &odabirOperacije);
    }

    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            sum[i][j]=matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("Zbroj matrica:\n");
    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    //if uvjet  da biramo operaciju ili eventualno switch case

    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            diff[i][j]=matrixA[i][j] - matrixB[i][j];
        }
    }

    printf("Razlika matrica:\n");
    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
}
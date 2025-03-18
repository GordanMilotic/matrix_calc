#include <stdio.h>

#define maxDimension 3

int main(){
    int matrixDimension;
    int matrixA[maxDimension][maxDimension], matrixB[maxDimension][maxDimension];

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
            //printf("Element [%d][%d]: ", i + 1, j + 1);
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
}
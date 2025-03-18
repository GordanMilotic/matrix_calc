#include <stdio.h>

#define maxMatrixDimension 3

int main(){
    int matrixDimension;
    int matrix[maxMatrixDimension][maxMatrixDimension];

    printf("Unesite dimenziju matrice (1, 2 ili 3): ");
    scanf("%d", &matrixDimension);

   /* if(matrixDimension < 1 || matrixDimension > 3){
        printf("Neispravna dimenzija matrice \n");
        return 0;
    }*/

    printf("Unesite elemente matrice %dx%d:\n", matrixDimension, matrixDimension);
    for (int i = 0; i < matrixDimension; i++){
        for (int j = 0; j < matrixDimension; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Zadana matrica:\n");
    for(int i = 0; i < matrixDimension; i++){
        for(int j = 0; j < matrixDimension; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
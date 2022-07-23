#include<stdio.h>
int main(){
    int i, j, arr1[2][2], arr2[2][2], ans[2][2] , sum = 0;

    printf("Enter your first array:\n");
    for(i = 1; i <=2; i++){
        for(j = 1 ; j <= 2; j++){
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter your second array:\n");
    for(i = 1; i <=2; i++){
        for(j = 1 ; j <=2; j++){
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }


    printf("\nThe summation of two array is:\n");
    for(i = 1; i <=2; i++){
        for(j = 1 ; j <=2; j++){

            ans[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }


    return 0;
}

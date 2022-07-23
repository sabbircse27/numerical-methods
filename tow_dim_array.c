#include<stdio.h>
int main(){
    int i, j, arr[4][4], sum = 0;

    printf("Enter your two dimensional array:\n");
    for(i = 1; i < 4; i++){
        for(j = 1 ; j < 4; j++){
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Entered array is: \n");
    for(i = 1; i < 4; i++){
        for(j = 1 ; j < 4; j++){
            printf("%d\t", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }

    printf("Sum of array is: %d", sum);

}

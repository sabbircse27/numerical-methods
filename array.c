#include<stdio.h>
int main(){
    int arr[10], i;

    printf("Enter your array: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    printf("Entered Array value is: ");
    for(i = 0; i < 10; i++){
        printf("%d\t", arr[i]);
    }


}

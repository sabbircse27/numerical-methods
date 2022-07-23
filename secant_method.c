#include<stdio.h>
#define E 0.01
#define F(x) x*x -4*x - 10
int main(){
    float x1, x2, x3, f1, f2, root;
    int count = 1;

    printf("Enter the value of x1: ");
    scanf("%f", &x1);

    printf("Enter the value of x2: ");
    scanf("%f", &x2);

    while(1){

        f1 = F(x1);
        f2 = F(x2);

        x3 = x2 - ((f2*(x2-x1))/(f2-f1));

        printf("The iteration no %d is: %f\n", count, x3);
        count++;

        if(fabs(x3-x2)> E){
            x1 = x2;
            x2 = x3;
        }else{
            root = x3;
            break;
        }
    }
    printf("The root is %f", x3);

    return 0;
}

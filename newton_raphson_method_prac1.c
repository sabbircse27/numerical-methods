#include<stdio.h>
#define F(x) x*x*x-5*x+1
#define F1(x) 3*x*x - 5
#define E 0.01
int main(){

    float f, f1, x1, x0;
    int count = 1;

    printf("Enter the initial value of X0: ");
    scanf("%f", &x0);

    while(1){
        f = F(x0);
        f1 = F1(x0);


        x1 = x0 -(f/f1);
        printf("The value of iteration %d : %f\n",count, x1);

        if(x1-x0 < E){
            break;
        }else{
            count++;
            x0 = x1;
        }
    }
}

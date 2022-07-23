#include<stdio.h>
#include<math.h>
#define E 0.001
#define F(x) x*x-3*x+2
#define F1(x) 2*x-3

int main(){
    float x0, x1, f1, f0, f2, root;
    int i = 1;

    printf("Enter the value of x0: ");
    scanf("%f", &x0);

    while(1)
    {
        f0 = F(x0);
        f1 = F1(x0);

        x1 = x0 - (f0/f1);

        printf("Value of iteration %d is %f\n", i, x1);
        i++;//1

        f2 = F(x1);

        if(fabs(f2) < E){
            root = x0 - (f0/f1);
            printf("Root is %f", root);
            break;
        }else{
            x0 = x1;
        }
    }
    return 0;
}

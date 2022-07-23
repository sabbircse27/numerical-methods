#include<stdio.h>
#define E 0.01
#define F(x) x*x*x-x-1
int main()
{
    float x0, x1, x2, f0, f1, f2;

    printf("Enter the initial value of x1: ");
    scanf("%f", &x1);

    printf("Enter the initial value of x2: ");
    scanf("%f", &x2);

    while(1){
        f1 = F(x1);
        f2 = F(x2);

        x0 = x1 - ((f1 * (x2 -x1))/(f2-f1));

        f0 = F(x0);

        if(f0*f1 > 0){
            x2 = x0;
        }else{
            x1 = x0;
        }
    }
    return 0;
}

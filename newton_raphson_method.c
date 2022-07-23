#include<stdio.h>
#include<math.h>
#define F(x) x*x-3*x+2
#define F1(x) 2*x-3
#define E 0.001


int main()
{
    float x1, x0 = 0;
    int count = 1;



    while(1){

        x1 = x0 - ((F(x0))/(F1(x0)));
        printf("Iteration %d: %f\n", count++, x1);

        if((x1-x0) < E){
            printf("=========================================\n");
            printf("Root is: %f\n", x1);
            break;
        }else{
            x0 = x1;

        }

    }


    return 0;
}


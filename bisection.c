#include<stdio.h>
#include<math.h>
#define E .01
#define F(x) x*x*x-x-1

double equ();
int main(){
    float x1, x2, f1, f2, x0, f0, root;
    printf("Enter your initial values of x1: ");
    scanf("%f", &x1);

    printf("Enter your initial values of x2: ");
    scanf("%f", &x2);

    while(1){

    f1 = F(x1);
    f2 = F(x2);

    if(f1*f2 >0){
        printf("x1 and x2 is not correct\n");
        break;
    }else{
        x0 = (x1 + x2)/2;
        f0 = F(x0);

        if((f1*f0)<0){
            x2 = x0;
        }else{
            x1 = x0;
        }
    }//end of if and else
     if(fabs((x2 - x1)/x2) < E){
        root = (x1 + x2)/2;
        printf("root is %f", root);
        break;
     }
    }//end of while


    return 0;
}


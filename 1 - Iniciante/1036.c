#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if(2 * a == 0){
        printf("Impossivel calcular\n");
        return 0;
    }

    float delta = 0;

    delta = pow(b, 2)- 4 * a * c;

    if(delta < 0){
        printf("Impossivel calcular\n");
        return 0;
    }

    float raiz1 = (-(b) + sqrt(delta))/ (2*a);
    float raiz2 = (-(b) - sqrt(delta))/ (2*a);

    printf("R1 = %.5f\nR2 = %.5f\n", raiz1, raiz2);

    return 0;
}

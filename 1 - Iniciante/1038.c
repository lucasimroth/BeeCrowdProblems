#include <stdio.h>

int main(){

    int item, qtde;

    scanf("%d %d", &item, &qtde);

    switch(item){
        case 1:
            printf("Total: R$ %.2f\n", qtde * 4.00);
            break;
        case 2:
            printf("Total: R$ %.2f\n", qtde * 4.50);
            break;
        case 3:
            printf("Total: R$ %.2f\n", qtde * 5.00);
            break;
        case 4:
            printf("Total: R$ %.2f\n", qtde * 2.00);
            break;
        case 5:
            printf("Total: R$ %.2f\n", qtde * 1.50);
            break;
    }

    return 0;
}
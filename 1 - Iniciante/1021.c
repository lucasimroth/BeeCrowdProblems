#include <stdio.h>
#include <math.h>

int main(){
	
	
	float n;
	
	int contNotas[6] = {0, 0, 0, 0, 0, 0}, contMoedas[6] = {0, 0, 0, 0, 0, 0};
	
	scanf("%f", &n);
	
	int notas = (int)n;
	n = (ceil((n - notas) * 100))/100;
	int moedas =(int)(n * 100);
	
	contNotas[0] = notas / 100;
	notas = notas % 100;
	
	contNotas[1] = notas / 50;
	notas = notas % 50;
	
	contNotas[2] = notas / 20;
	notas = notas % 20;
	
	contNotas[3] = notas / 10;
	notas = notas % 10;
	
	contNotas[4] = notas / 5;
	notas = notas % 5;
	
	contNotas[5] = notas / 2;
	notas = notas % 2;
	
	contMoedas[0] = notas / 1;
	
	contMoedas[1] = moedas / 50;
	moedas = moedas % 50;
	
	contMoedas[2] = moedas / 25;
	moedas = moedas % 25;
	
	contMoedas[3] = moedas / 10;
	moedas = moedas % 10;
	
	contMoedas[4] = moedas / 5;
	moedas = moedas % 5;
	
	contMoedas[5] = moedas / 1;
	moedas = moedas % 1;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", contNotas[0]);
	printf("%d nota(s) de R$ 50.00\n", contNotas[1]);
	printf("%d nota(s) de R$ 20.00\n", contNotas[2]);
	printf("%d nota(s) de R$ 10.00\n", contNotas[3]);
	printf("%d nota(s) de R$ 5.00\n", contNotas[4]);
	printf("%d nota(s) de R$ 2.00\n", contNotas[5]);
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", contMoedas[0]);
	printf("%d moeda(s) de R$ 0.50\n", contMoedas[1]);
	printf("%d moeda(s) de R$ 0.25\n", contMoedas[2]);
	printf("%d moeda(s) de R$ 0.10\n", contMoedas[3]);
	printf("%d moeda(s) de R$ 0.05\n", contMoedas[4]);
	printf("%d moeda(s) de R$ 0.01\n", contMoedas[5]);
	
	
	
	return 0;
}

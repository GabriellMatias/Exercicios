//bibliotecas
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int qntDados = 0, somaDados = 0;
	do{
		printf("Qual a quantidade de dados? (Limite de 100): ");
		scanf("%d", &qntDados);
	}while((qntDados <= 0) || (qntDados > 100));
	
	int dados[qntDados];
	
	for(int i = 0; i < qntDados; i++) {
		printf("Qual o valor do %d dado? ", i + 1);
		scanf("%d", &dados[i]);
		somaDados += dados[i];
	}
	
	printf("A soma dos %d dados é: %d", qntDados, somaDados);

	return 0;
}
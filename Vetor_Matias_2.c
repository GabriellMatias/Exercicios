#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, aluno;
	float notas[aluno], dados;
	
	printf("Digite numeros para somar ");
	scanf("%d",&aluno);
	
	
	for(i = 0; i < aluno; i++)
	{ 
        printf("Numero %d: ", i);
        scanf("%f",&notas[i]);
	}
    printf("Exibindo as notas \n");
	for (i= 0; i < aluno; i++)
	{	
		
		printf("\nnota[%d] = %.2f", i, notas[i]);
	}

	return 0;
}
#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, aluno;
	float notas[aluno];
	
	printf("Digite o numero de alunos: ");
	scanf("%d",&aluno);
	
	
	for(i = 0; i < aluno; i++)
	{ 
        printf("Nota: ");
        scanf("%f",&notas[i]);
        fflush(stdin);
	}
    system("cls");
    printf("Exibindo as notas \n");
	for (i= 0; i <  aluno; i++)
	{	
		
		printf("\nnota[%d] = %.2f", i, notas[i]);
	}

	return 0;
}
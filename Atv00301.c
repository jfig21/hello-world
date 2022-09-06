
#include <stdio.h>

int main(int argc, char *argv[])
{
    int numero;
	int idade;
	char trabEstudante;

	printf("Numero? ");
	scanf("%d", &numero);
	printf("Idade? ");
	scanf("%d", &idade);
	fflush(stdin);
	printf("Trabalhador estudante? ");
	scanf("%c", &trabEstudante);

	printf("Bem-vindo%15d\n",numero);
	printf("Idade:%-5danos\n",idade);

    return 0;
}


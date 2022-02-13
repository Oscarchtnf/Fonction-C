#include <stdio.h>
#include <stdlib.h>



void echange(int a, int b)
{

	printf("Entier 1 vaut :%d\nEntier 2 vaut :%d\n", a, b);
    int variable = 0;
    variable = a;
    a = b;
    b = variable;
    printf("Entier 1 vaut :%d\nEntier 2 vaut :%d\n", a, b);
	
	
}

int main(int argc, char const *argv[])
{
	int a=0;
	int b=0;

	printf("Saisir la valeur de l'entier 1 !!\n");
	scanf("%d", &a);

	printf("Saisir la valeur de l'entier 2 !!\n");
	scanf("%d", &b);


	echange(a, b);

	return 0;
}
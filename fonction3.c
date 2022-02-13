#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int entier_1=0;
	int entier_2=0;
	int entier_3=0;


	printf("Saisir la valeur d'un nombre!\n");
	scanf("%d", &entier_1);
	printf("Saisir la valeur d'un deuxième nombre!\n");
	scanf("%d", &entier_2);
	printf("Saisir la valeur d'un troisième nombre!\n");
	scanf("%d", &entier_3);


	if (entier_1>entier_2 && entier_1>entier_3)
	{
			printf("Le premier nombre qui vaut : %d est le plus grand !\n", entier_1);
	}
	else if (entier_2>entier_1 && entier_2>entier_3)
	{
			printf("Le deuxième nombre qui vaut : %d est le plus grand !\n", entier_2);
	}
	else if (entier_3>entier_1 && entier_3>entier_2)
	{
			printf("Le troisième nombre qui vaut : %d est le plus grand !\n", entier_3);
	}


	return 0;
}
#include <stdio.h>
#include <stdlib.h>


int pair(int nombre)
{
	if (nombre%2 ==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}





int main(int argc, char const *argv[])
{	
	int nombre=0;
	printf("Saisir la valeur d'un nombre!\n");
	scanf("%d", &nombre);




if (pair(nombre)==1)
{
	printf("Le nombre saisi est pair\n");
}
else
{
	printf("Le nombre saisi est inpair\n");

}

	return 0;

}

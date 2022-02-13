#include <stdio.h>
#include <stdlib.h>


int total_entier (int A, int B)
{
    int nbr_entier_3=0; 
	nbr_entier_3=A*B;
    return nbr_entier_3;
}

int main(int argc, char const *argv[])
{
    int total=0;
    int nbr_entier_1=0;
	int nbr_entier_2=0;
    

	printf("Saisir un premier nombre entier :\n");
	scanf("%d", &nbr_entier_1);
	printf("Saisir un deuxième nombre entier :\n");
	scanf("%d", &nbr_entier_2);
	
	total=total_entier(nbr_entier_1, nbr_entier_2);
	printf("Le total des deux nombres entiers est égale a :%d \n",total);
	
	
	return 0;
}
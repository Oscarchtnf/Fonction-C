#include <stdio.h>
#include <stdlib.h>


int total_entier (int A)
{
    int nbr_entier_3=0; 
	nbr_entier_3=A*A;
    return nbr_entier_3;
}

int main(int argc, char const *argv[])
{
    int total=0;
    int nbr_entier_1=0;

    

	printf("Saisir un premier nombre entier :\n");
	scanf("%d", &nbr_entier_1);

	
	total=total_entier(nbr_entier_1);
	printf("Le total des deux nombres entiers est égale a :%d \n",total);
	
	
	return 0;
}
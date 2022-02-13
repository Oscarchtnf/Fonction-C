#include <stdio.h>
#include <stdlib.h>


void fruits ()
{

    int nbr_pommes=0;
	int nbr_poires=0;
	int nbr_total=0; 

    

	printf("Saisir le nombre de pommes que vous possedez :\n");
	scanf("%d", &nbr_pommes);
	printf("Saisir le nombre de poires que vous possedez :\n");
	scanf("%d", &nbr_poires);
	
	nbr_total=nbr_pommes + nbr_poires;
    
    printf("le nombre total de fruit est de :%d", nbr_total);

}

int main(int argc, char const *argv[])
{

fruits();

	return 0;
}
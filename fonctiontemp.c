#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Date(int jour, int mois, int annee, int heure, int minutes, int secondes)
{

printf("Nous sommes le %d %s %d, il est %d:%d:%d\n", jour, var_mois, annee, heure, minutes, secondes);

	char var_mois[10];
	if (mois ==1){
		sprintf(var_mois, "%d", mois);   
		printf("\njanvier %s", var_mois);		
		return ;}
	if (mois ==2){
		sprintf(var_mois, "%d", mois);   
		printf("\nfevrier %s", var_mois);
		return ;}
	if (mois ==3){
		sprintf(var_mois, "%d", mois);   
		printf("\nmars %s", var_mois);
		return ;}
	if (mois ==4){
		sprintf(var_mois, "%d", mois);   
		printf("\navril %s", var_mois);
		return ;}
	if (mois ==5){
		sprintf(var_mois, "%d", mois);   
		printf("\nmai %s", var_mois);
		return ;}
	if (mois ==6){
		sprintf(var_mois, "%d", mois);   
		printf("\njuin %s", var_mois);
		return ;}
	if (mois ==7){
		sprintf(var_mois, "%d", mois);   
		printf("\njuillet %s", var_mois);
		return ;}
	if (mois ==8){
		sprintf(var_mois, "%d", mois);   
		printf("\naout %s", var_mois);
		return ;}
	if (mois ==9){
		sprintf(var_mois, "%d", mois);   
		printf("\nseptembre %s", var_mois);
		return ;}
	if (mois ==10){
		sprintf(var_mois, "%d", mois);   
		printf("\noctobre %s", var_mois);
		return ;}
	if (mois ==11){
		sprintf(var_mois, "%d", mois);   
		printf("\nnovembre %s", var_mois);
		return ;}
	if (mois ==12){
		sprintf(var_mois, "%d", mois);   
		printf("\ndecembre %s", var_mois);


return ;}
}






int main(int argc, char const *argv[])
{
	int jour=0, mois=0, annee=0, heure=0, minutes=0, secondes=0;

	printf("Saisir la date du jour :\n");
	scanf("%d", &jour);
	printf("Saisir le mois de l'année :\n");
	scanf("%d", &mois);
	printf("Saisir l'année :\n");
	scanf("%d", &annee);
	printf("Saisir l'heure du jour :\n");
	scanf("%d", &heure);
	printf("Saisir les minutes :\n");
	scanf("%d", &minutes);
	printf("Et enfin saisir les secondes :\n\n");
	scanf("%d", &secondes);
	return 0;

	Date(jour, mois, annee, heure, minutes, secondes);

}


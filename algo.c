#include <stdio.h>

int main(){
	int pdvMonster;
	int attaqueSympa;
	int attaqueMonstrueuse;
	int pdvJoueur;
	int choixJoueur;

	pdvMonster=100;
	pdvJoueur=100;
	attaqueSympa=50;
	attaqueMonstrueuse=25;
	choixJoueur;


	printf("Le monstre a : %d points de vie\n", pdvMonster);
	printf ("\n");
	printf("Choisissez\n");
	printf("1. Attaquer\n");
  printf("2. Defendre\n");
	scanf("%d", &choixJoueur);
	printf("\n");

switch (choixJoueur)
{
	case 1:
		 printf("Vous avez choisi le Royal Cheese. Bon choix !");
		 break;
	case 2:
		 printf("Vous avez choisi le Mc Deluxe. Berk, trop de sauce...");
		 break;
	default:
		 printf("Error");
		 break;
}

printf("\n\n");

	printf ("Attaque sympa fait %d points de degat\n", attaqueSympa);

	 pdvMonster-=attaqueSympa;

	 if (pdvMonster <= 0)
 	{
 	  printf ("Le monstre est mort lol\n");
 	}
 	else
 {
	 printf("Le monstre a desormais : %d points de vie\n", pdvMonster);
	 printf ("\n");
	 printf("Attention le monstre vous attaque monstrueusement\n");

	 pdvJoueur-=attaqueMonstrueuse;

	 if (pdvJoueur <= 0)
	 {
	 	printf ("Game Over\n");
	 }
	 else
	 {
	 printf("Vous avez : %d points de vie\n", pdvJoueur);
	 printf("Il vous reste : %d points de vie\n", pdvJoueur);
	 printf ("\n");
	 printf ("Vous attaquez de nouveau\n");

	 pdvMonster-=attaqueSympa;

	 if (pdvMonster <= 0)
 	{
 	  printf ("Le monstre est mort lol\n");
 	}
 	else
 {
	 printf("Le monstre a desormais : %d points de vie\n", pdvMonster);
	 printf ("\n");
	 printf("Attention le monstre vous attaque monstrueusement\n");

	 pdvJoueur-=attaqueMonstrueuse;
	 }
 }
}
    return 0;
}

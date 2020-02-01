#include <stdio.h>
#include <stdlib.h>
 //Jeu
int main() {
	int epee;
	int bombe;
	int soin;
	int fleche;
	int arc;
	int choix;
	int choixA;
	 int argent;
	 	argent = 500;
	arc = 1;
	epee=0;
	bombe=0;
	soin=0;
	fleche=0;
while (argent>0) {
 printf("====================== \n");
 printf("INVENTAIRE :\n");
 printf("Argent : %d \n",argent);
if (epee>0) {
	printf("Epee(s) : %d \n",epee);
}
if (bombe>0) {
	printf("Bombe(s) : %d \n",bombe);
}
if (soin>0) {
	printf("Soin(s) : %d \n",soin);
}
if (arc>0) {
	printf("Arc(s) : %d \n",arc);
} 
if (fleche>0) {
	printf("Fleche(s) : %d ",fleche);
}
 printf("\n ====================== \n");


int shop[5] = {200,50,30,25,300};
printf("Que voulez vous faire? \n Acheter? =1 Vendre? =2?");
scanf("%d",&choix);
choixA=0;
if (choix==1){
 printf("=-=-=-=-=-=-= \n Bienvenue dans notre magasin !! \n Nous avons une multitude d'objets à vendre \n Epee 200 golds \n Bombe 50 golds \n Soin 30 golds \n Fleches 25 golds \n Arc 300 golds \n =-=-=-=-=-=-= \n ");
 while (choixA!=10 && argent>0) {
 printf ("Que voulez vous achetez? 1= Epee , 2= Bombe, 3= Soin 4= Fleches 5= Arc 10= Quitter \n");
 scanf("%d",&choixA);
 if (choixA==1) {
 argent=argent-shop[0];
 epee=epee+1;
 printf("Argent : %d \n",argent);
 choixA=0;
 }
 if (choixA==2) {
 argent=argent-shop[1];
 bombe=bombe+1;
printf("Argent : %d \n",argent); 
 choixA=0;
 }
 if (choixA==3) {
 argent=argent-shop[2];	 
 soin=soin+1;
 printf("Argent : %d \n",argent);
  choixA=0;
 }
 if (choixA==4) {
 argent=argent-shop[3];	
fleche=fleche+1;
 printf("Argent : %d \n",argent);
  choixA=0;
 }
 if (choixA==5) {
 argent=argent-shop[4];	
 arc=arc+1;
printf("Argent : %d \n",argent); 
 choixA=0;
 }
 if (choixA>5 && choixA!=10) {
printf("Veuillez choisir un autre chiffre...");
 choixA=0;
 }
  if (choixA==10) {
choix=0;
 }
 }
}
if (choix==2) {
	
}
}
printf("Vous n'avez plus d'argent... \n");
}

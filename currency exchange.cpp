#include <iostream>
#include<string>
using namespace std;
void affichermenu(){
	cout<<"1:RMB\n" ;
	cout<<"2:JPY\n" ;
	cout<<"3:SAR\n" ;
	cout<<"4:QAR\n" ;
	cout<<"5:SHP\n" ;
	cout<<"6:EGP\n" ;
	cout<<"7:CHF\n" ;
	cout<<"8:RUB\n" ;
	cout<<"9:TRY\n" ;
	cout<<"10:EUR\n" ;
	cout<<"11:AED\n" ;
	cout<<"12:ALL\n" ;
	cout<<"13:USD\n" ;
	cout<<"14:AUD\n" ;
	cout<<"15:ARS\n" ;
	cout<<"16:CAD\n" ;
}
double convertirenmad(double montant,int choix){
	double montantenmad;
	switch (choix){
		
		case 1:
			montantenmad=montant*1.45;
			break;
		case 2:
			montantenmad=montant*0.073;
			break;	
		case 3:
			montantenmad=montant*2.68;
			break;
		case 4:
			montantenmad=montant*2.76;
			break;
		case 5:
			montantenmad=montant*12.64;
			break;
		case 6:
			montantenmad=montant*0.32;
			break;
		case 7:
			montantenmad=montant*11.24;
			break;
		case 8:
			montantenmad=montant*0.12;
			break;
		case 9:
			montantenmad=montant*0.51;
			break;
		case 10:
			montantenmad=montant*11.175;
			break;
		case 11:
			montantenmad=montant*2.73;
			break;
		case 12:
			montantenmad=montant*0.099;
			break;
		case 13:
			montantenmad=montant*10.05;
			break;
		case 14:
			montantenmad=montant*6.65;
			break;
		case 15:
			montantenmad=montant*0.045;
			break;
		case 16:
			montantenmad=montant*7.39;
			break;
		
			
	}
	return montantenmad;
};
double convertir(double montant1,int choix1){
	double montantenmad;
	switch(choix1){
		
		case 1:
			montantenmad=montant1/1.45;
			break;
		case 2:
			montantenmad=montant1/0.073;
			break;
		case 3:
			montantenmad=montant1/2.68;
			break;
		case 4:
			montantenmad=montant1/2.76;
			break;
		case 5:
			montantenmad=montant1/12.64;
			break;
		case 6:
			montantenmad=montant1/0.32;
			break;
		case 7:
			montantenmad=montant1/11.24;
			break;
		case 8:
			montantenmad=montant1/0.12;
			break;
		case 9:
			montantenmad=montant1/0.51;
			break;
		case 10:
			montantenmad=montant1/11.175;
			break;
		case 11:
			montantenmad=montant1/2.73;
			break;
		case 12:
			montantenmad=montant1/0.099;
			break;
		case 13:
			montantenmad=montant1/10.05;
			break;
		case 14:
			montantenmad=montant1/6.65;
			break;
		case 15:
			montantenmad=montant1/0.045;
			break;
		case 16:
			montantenmad=montant1/7.93;
			break;
	}
	return montantenmad;
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double deviseenmad,resultat,montant1;
	int choix,choix1;
	cout<<"choisir devise base\n";
	affichermenu();
	cin>>choix;
	cout<<"choisir devise cible\n";
	affichermenu();
	cin>>choix1;
	cout<<"saisir le montant\n";
	cin>>montant1;
	deviseenmad=convertirenmad(montant1,choix);
	resultat=convertir(deviseenmad,choix1);
	cout<<"la valeur est:"<<resultat;
	cout<<"la valeur est:"<<deviseenmad;
	return 0;
}

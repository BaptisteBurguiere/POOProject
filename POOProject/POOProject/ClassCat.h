#pragma once

#ifndef DEF_CLASSCAT
#define DEF_CLASSCAT

#include<string>

using namespace std;

class Categorie
{
public:

	Categorie();
	virtual void Ajouter();
	virtual void Modifier();
	virtual void Supprimer();
	virtual void Rechercher();


protected:

	string b_adrBDD;

};




// ====================================================================================================================================
// ======================================================       PERSONNEL      ========================================================
// ====================================================================================================================================


class Personnel : public Categorie {

public:

	Personnel(int ID);
	Personnel(int ID, string nom, string prenom);
	Personnel(int ID, string nom, string prenom, string superieur, string adresse, string date);
	void Ajouter();
	void Modifier();
	void Supprimer();
	void Rechercher();


protected:

	int p_ID;
	string p_nom;
	string p_prenom;
	string p_superieur;
	string p_adresse;
	string p_date;
};




// ====================================================================================================================================
// =======================================================       CLIENTS      =========================================================
// ====================================================================================================================================


class Client : public Categorie {

public:

	Client(int num);
	Client(int num, string nom, string prenom);
	Client(int num, string nom, string prenom, string adrFact, string adrLiv, string dateNaissance, string date1achat);
	void Ajouter();
	void Modifier();
	void Supprimer();
	void Rechercher();

protected:

	int c_num;
	string c_nom;
	string c_prenom;
	string c_adrFact;
	string c_adrLiv;
	string c_dateNaissance;
	string c_date1achat;
};




// ====================================================================================================================================
// =======================================================       COMMANDES      =======================================================
// ====================================================================================================================================


class Commande : public Categorie {

public:

	Commande(string ref);
	Commande(string ref, string dateLiv, string dateEmi, string datePaie, string moyPaie, string dateReg, int refArt, int quantiteArt, int totalArt, float totalHT, float totalTVA, float totalTTC);
	void Ajouter();
	void Modifier();
	void Supprimer();
	void Rechercher();

protected:

	string co_ref;
	string co_dateLiv;
	string co_dateEmi;
	string co_datePaie;
	string co_moyPaie;
	string co_dateReg;
	int co_refArt;
	int co_quantiteArt;
	int co_totalArt;
	float co_totalHT;
	float co_totalTVA;
	float co_totalTTC;
};




// ====================================================================================================================================
// =======================================================        STOCK       =========================================================
// ====================================================================================================================================


class Stock : public Categorie {

public:

	Stock(string ref);
	Stock(string desi, int tst);
	Stock(string ref, string desi, float prixHT, float tauxTVA, int quantiteStock, int seuilReapro, string couleur);
	void Ajouter();
	void Modifier();
	void Supprimer();
	void Rechercher();

protected:

	string s_ref;
	string s_desi;
	float s_prixHT;
	float s_tauxTva;
	int s_quantiteStock;
	int s_seuilReapro;
	string s_couleur;
};

#endif
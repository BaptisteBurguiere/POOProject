#include "ClassCat.h"
#include "MainForm.h"
#include<string>

using namespace std;

Categorie::Categorie() {

	b_adrBDD = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST groupe 3";
}

void Categorie::Ajouter() {

	// Méthode virtuelle pure
}

void Categorie::Modifier() {

	// Méthode virtuelle pure
}

void Categorie::Supprimer() {

	// Méthode virtuelle pure
}

void Categorie::Rechercher() {

	// Méthode virtuelle pure
}




// ====================================================================================================================================
// ======================================================       PERSONNEL       =======================================================
// ====================================================================================================================================


// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

Personnel::Personnel(int ID) {

	Categorie();
	p_ID = ID;
}

Personnel::Personnel(int ID, string nom, string prenom) {

	Categorie();
	p_ID = ID;
	p_nom = nom;
	p_prenom = prenom;
}

Personnel::Personnel(int ID, string nom, string prenom, string superieur, string adresse, string date) {

	Categorie();
	p_ID = ID;
	p_nom = nom;
	p_prenom = prenom;
	p_superieur = superieur;
	p_adresse = adresse;
	p_date = date;
}


// -------------------------------------------------------       Ajouter       --------------------------------------------------------

void Personnel::Ajouter() {

	// TODO
}


// -------------------------------------------------------       Modifier       -------------------------------------------------------

void Personnel::Modifier() {

	//TODO
}


// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

void Personnel::Supprimer() {

	//TODO
}


// -------------------------------------------------------     Rechercher     ---------------------------------------------------------

void Personnel::Rechercher() {

	// TODO
}




// ====================================================================================================================================
// ======================================================        CLIENT        ========================================================
// ====================================================================================================================================


// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

Client::Client(int num) {

	Categorie();
	c_num = num;
}

Client::Client(int num, string nom, string prenom) {

	Categorie();
	c_num = num;
	c_nom = nom;
	c_prenom = prenom;
}

Client::Client(int num, string nom, string prenom, string adrFact, string adrLiv, string dateNaissance, string date1achat) {

	Categorie();
	c_num = num;
	c_nom = nom;
	c_prenom = prenom;
	c_adrFact = adrFact;
	c_adrLiv = adrLiv;
	c_dateNaissance = dateNaissance;
	c_date1achat = date1achat;
}


// -------------------------------------------------------       Ajouter       --------------------------------------------------------

void Client::Ajouter() {

	// TODO
}


// -------------------------------------------------------       Modifier       -------------------------------------------------------

void Client::Modifier() {

	//TODO
}


// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

void Client::Supprimer() {

	//TODO
}


// -------------------------------------------------------     Rechercher     ---------------------------------------------------------

void Client::Rechercher() {

	// TODO
}




// ====================================================================================================================================
// ======================================================        COMMANDE        ======================================================
// ====================================================================================================================================


// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

Commande::Commande(string ref) {

	Categorie();
	co_ref = ref;
}

Commande::Commande(string ref, string dateLiv, string dateEmi, string datePaie, string moyPaie, string dateReg, int refArt, int quantiteArt, int totalArt, float totalHT, float totalTVA, float totalTTC) {

	Categorie();
	co_ref = ref;
	co_dateLiv = dateLiv;
	co_dateEmi = dateEmi;
	co_datePaie = datePaie;
	co_moyPaie = moyPaie;
	co_dateReg = dateReg;
	co_refArt = refArt;
	co_quantiteArt = quantiteArt;
	co_totalArt = totalArt;
	co_totalHT = totalHT;
	co_totalTVA = totalTVA;
	co_totalTTC = totalTTC;
}


// -------------------------------------------------------       Ajouter       --------------------------------------------------------

void Commande::Ajouter() {

	// TODO
}


// -------------------------------------------------------       Modifier       -------------------------------------------------------

void Commande::Modifier() {

	//TODO
}


// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

void Commande::Supprimer() {

	//TODO
}


// -------------------------------------------------------     Rechercher     ---------------------------------------------------------

void Commande::Rechercher() {

	// TODO
}




// ====================================================================================================================================
// ======================================================         STOCK         =======================================================
// ====================================================================================================================================


// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

Stock::Stock(string ref) {

	Categorie();
	s_ref = ref;
}

Stock::Stock(string desi, int tst) {

	Categorie();
	s_desi = desi;
}

Stock::Stock(string ref, string desi, float prixHT, float tauxTVA, int quantiteStock, int seuilReapro, string couleur) {

	Categorie();
	s_ref = ref;
	s_desi = desi;
	s_prixHT = prixHT;
	s_tauxTva = tauxTVA;
	s_quantiteStock = quantiteStock;
	s_seuilReapro = seuilReapro;
	s_couleur = couleur;
}


// -------------------------------------------------------       Ajouter       --------------------------------------------------------

void Stock::Ajouter() {

	// TODO
}


// -------------------------------------------------------       Modifier       -------------------------------------------------------

void Stock::Modifier() {

	//TODO
}


// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

void Stock::Supprimer() {

	//TODO
}


// -------------------------------------------------------     Rechercher     ---------------------------------------------------------

void Stock::Rechercher() {

	// TODO
}
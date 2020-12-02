#pragma once

namespace ClassCat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	ref class Categorie
	{
	public:

		Categorie();

	protected:

		String^ adrBDD;
		String^ requete;
		MySqlConnection^ con;
		MySqlCommand^ cmd;
		MySqlDataReader^ dr;;
	};




	// ====================================================================================================================================
	// ======================================================       PERSONNEL      ========================================================
	// ====================================================================================================================================


	ref class Personnel : public Categorie {

	public:

		Personnel(int ID);
		Personnel(String^ nom, String^ prenom);
		Personnel(String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ date);
		Personnel(int id,  String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ date);
		void Ajouter();
		void Modifier();
		void Supprimer();


	protected:

		int p_ID;
		String^ p_nom;
		String^ p_prenom;
		String^ p_superieur;
		String^ p_adresse;
		String^ p_date;
	};




	// ====================================================================================================================================
	// =======================================================       CLIENTS      =========================================================
	// ====================================================================================================================================


	ref class Client : public Categorie {

	public:

		Client(int num);
		Client(int num, String^ nom, String^ prenom);
		Client(int num, String^ nom, String^ prenom, String^ adrFact, String^ adrLiv, String^ dateNaissance, String^ date1achat);
		void Ajouter();
		void Modifier();
		void Supprimer();

	protected:

		int c_num;
		String^ c_nom;
		String^ c_prenom;
		String^ c_adrFact;
		String^ c_adrLiv;
		String^ c_dateNaissance;
		String^ c_date1achat;
	};




	// ====================================================================================================================================
	// =======================================================       COMMANDES      =======================================================
	// ====================================================================================================================================


	ref class Commande : public Categorie {

	public:

		Commande(String^ ref);
		Commande(String^ ref, String^ dateLiv, String^ dateEmi, String^ datePaie, String^ moyPaie, String^ dateReg, int refArt, int quantiteArt, int totalArt, float totalHT, float totalTVA, float totalTTC);
		void Ajouter();
		void Modifier();
		void Supprimer();

	protected:

		String^ co_ref;
		String^ co_dateLiv;
		String^ co_dateEmi;
		String^ co_datePaie;
		String^ co_moyPaie;
		String^ co_dateReg;
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


	ref class Stock : public Categorie {

	public:

		Stock(String^ ref);
		Stock(String^ desi, int tst);
		Stock(String^ ref, String^ desi, float prixHT, float tauxTVA, int quantiteStock, int seuilReapro, String^ couleur);
		void Ajouter();
		void Modifier();
		void Supprimer();

	protected:

		String^ s_ref;
		String^ s_desi;
		float s_prixHT;
		float s_tauxTva;
		int s_quantiteStock;
		int s_seuilReapro;
		String^ s_couleur;
	};
}
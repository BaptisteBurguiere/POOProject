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

		Personnel(String^ ID);
		Personnel(String^ nom, String^ prenom);
		Personnel(String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ date);
		Personnel(String^ id,  String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ date);
		void Ajouter();
		void Modifier();
		void Supprimer();


	protected:

		String^ p_ID;
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

		Client(String^ num);
		Client(String^ num, String^adr, int x);
		Client(String^ nom, String^ prenom);
		Client(String^ nom, String^ prenom, String^ adrFact, String^ adrLiv, String^ dateNaissance, String^ date1achat);
		Client(String^ num, String^ nom, String^ prenom, String^ adrFact, String^ adrFact2, String^ adrLiv, String^ adrLiv2, String^ dateNaissance, String^ date1achat);
		void Ajouter();
		void Modifier();
		void Supprimer();
		void AjouterAdresse(int state);

	protected:

		String^ c_num;
		String^ c_nom;
		String^ c_prenom;
		String^ c_adrFact1;
		String^ c_adrFact2;
		String^ c_adrLivr1;
		String^ c_adrLivr2;
		String^ c_dateNaissance;
		String^ c_date1achat;
	};




	// ====================================================================================================================================
	// =======================================================       COMMANDES      =======================================================
	// ====================================================================================================================================


	ref class Commande : public Categorie {

	public:

		Commande(String^ ref);
		Commande(String^ ref, String^ dateLiv, String^ dateEmi, String^ datePaie, String^ moyPaie, String^ dateReg, String^ refArt, String^ quantiteArt, String^ totalArt, String^ totalHT, String^ totalTVA, String^ totalTTC);
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
		String^ co_refArt;
		String^ co_quantiteArt;
		String^ co_totalArt;
		String^ co_totalHT;
		String^ co_totalTVA;
		String^ co_totalTTC;
	};




	// ====================================================================================================================================
	// =======================================================        STOCK       =========================================================
	// ====================================================================================================================================


	ref class Stock : public Categorie {

	public:

		Stock(String^ ref);
		Stock(String^ desi, String^ tst);
		Stock(String^ desi, String^ prixHT, String^ tauxTVA, String^ quantiteStock, String^ seuilReapro, String^ couleur);
		Stock(String^ ref, String^ desi, String^ prixHT, String^ tauxTVA, String^ quantiteStock, String^ seuilReapro, String^ couleur);
		void Ajouter();
		void Modifier();
		void Supprimer();

	protected:

		String^ s_ref;
		String^ s_desi;
		String^ s_prixHT;
		String^ s_tauxTva;
		String^ s_quantiteStock;
		String^ s_seuilReapro;
		String^ s_couleur;
	};
}
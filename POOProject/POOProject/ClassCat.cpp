#include "ClassCat.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

namespace ClassCat {

	Categorie::Categorie() {

		adrBDD = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST groupe 3";
	}




	// ====================================================================================================================================
	// ======================================================       PERSONNEL       =======================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Personnel::Personnel(int ID) {

		p_ID = ID;
	}

	Personnel::Personnel(String^ nom, String^ prenom) {

		p_nom = nom;
		p_prenom = prenom;
	}

	Personnel::Personnel(String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ date) {

		p_nom = nom;
		p_prenom = prenom;
		p_superieur = superieur;
		p_adresse = adresse;
		p_date = date;
	}


	// -------------------------------------------------------       Ajouter       --------------------------------------------------------

	void Personnel::Ajouter() {

		try
		{
			MySqlConnection^ con = gcnew MySqlConnection(adrBDD);
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO DATE(ID_DATE, DATE) SELECT '','" + p_date + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + p_date + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			try
			{
				MySqlConnection^ con = gcnew MySqlConnection(adrBDD);
				MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO ADRESSE(ID_ADRESSE, DATE) SELECT '','" + p_adresse + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + p_adresse + "')", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();

				try
				{



					MessageBox::Show("Personnel ajouté.");
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message);
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------       Modifier       -------------------------------------------------------

	void Personnel::Modifier() {

		//TODO
	}


	// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

	void Personnel::Supprimer() {

		//TODO
	}




	// ====================================================================================================================================
	// ======================================================        CLIENT        ========================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Client::Client(int num) {

		Categorie();
		c_num = num;
	}

	Client::Client(int num, String^ nom, String^ prenom) {

		Categorie();
		c_num = num;
		c_nom = nom;
		c_prenom = prenom;
	}

	Client::Client(int num, String^ nom, String^ prenom, String^ adrFact, String^ adrLiv, String^ dateNaissance, String^ date1achat) {

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




	// ====================================================================================================================================
	// ======================================================        COMMANDE        ======================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Commande::Commande(String^ ref) {

		Categorie();
		co_ref = ref;
	}

	Commande::Commande(String^ ref, String^ dateLiv, String^ dateEmi, String^ datePaie, String^ moyPaie, String^ dateReg, int refArt, int quantiteArt, int totalArt, float totalHT, float totalTVA, float totalTTC) {

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




	// ====================================================================================================================================
	// ======================================================         STOCK         =======================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Stock::Stock(String^ ref) {

		Categorie();
		s_ref = ref;
	}

	Stock::Stock(String^ desi, int tst) {

		Categorie();
		s_desi = desi;
	}

	Stock::Stock(String^ ref, String^ desi, float prixHT, float tauxTVA, int quantiteStock, int seuilReapro, String^ couleur) {

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
}
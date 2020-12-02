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
		con = gcnew MySqlConnection(adrBDD);

	}




	// ====================================================================================================================================
	// ======================================================       PERSONNEL       =======================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Personnel::Personnel(String^ ID) {

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

	Personnel::Personnel(String^ id, String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ date) {

		p_ID = id;
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
			requete = "INSERT INTO DATE SELECT '','" + p_date + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + p_date + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + p_adresse + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + p_adresse + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO PERSONNEL SELECT '', PERSONNEL.ID_ADRESSE, PERSONNEL.ID_DATE, PERSONNEL.ID_PERSONNEL, '" + p_nom + "', '" + p_prenom + "' FROM DATE, PERSONNEL, ADRESSE WHERE ADRESSE = '" + p_adresse + "' AND DATE = '" + p_date + "' AND ID_PERSONNEL = '" + p_superieur + "' AND NOT EXISTS (SELECT * FROM PERSONNEL, ADRESSE, DATE WHERE ADRESSE = '" + p_adresse+ "' AND ADRESSE.ID_ADRESSE = PERSONNEL.ID_ADRESSE AND DATE = '" + p_date + "' AND DATE.ID_DATE = PERSONNEL.ID_DATE AND ID_SUPERIEUR = '" + p_superieur + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------       Modifier       -------------------------------------------------------

	void Personnel::Modifier() {

		try
		{
			requete = "INSERT INTO DATE SELECT '','" + p_date + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + p_date + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + p_adresse + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + p_adresse + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "UPDATE PERSONNEL SET PERSONNEL.ID_ADRESSE=(SELECT ADRESSE.ID_ADRESSE FROM ADRESSE WHERE ADRESSE.ADRESSE='" + p_adresse + "'), PERSONNEL.ID_DATE=(SELECT DATE.ID_DATE FROM DATE WHERE DATE.DATE='" + p_date + "'), PERSONNEL.ID_SUPERIEUR='" + p_superieur + "', PERNOM='" + p_nom + "', PERPRENOM='" + p_prenom + "' WHERE ID_PERSONNEL='" + p_ID + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

	void Personnel::Supprimer() {

		try
		{
			requete = "DELETE FROM PERSONNEL WHERE ID_PERSONNEL='" + p_ID + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}




	// ====================================================================================================================================
	// ======================================================        CLIENT        ========================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Client::Client(String^ num) {

		Categorie();
		c_num = num;
	}

	Client::Client(String^ nom, String^ prenom) {

		Categorie();
		c_nom = nom;
		c_prenom = prenom;
	}

	Client::Client(String^ nom, String^ prenom, String^ adrFact, String^ adrLiv, String^ dateNaissance, String^ date1achat) {

		Categorie();
		c_nom = nom;
		c_prenom = prenom;
		c_adrFact = adrFact;
		c_adrLiv = adrLiv;
		c_dateNaissance = dateNaissance;
		c_date1achat = date1achat;
	}

	Client::Client(String^ num, String^ nom, String^ prenom, String^ adrFact, String^ adrLiv, String^ dateNaissance, String^ date1achat) {

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

		try
		{
			requete = "INSERT INTO DATE SELECT '','" + p_date + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + p_date + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO DATE SELECT '','" + p_date + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + p_date + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + p_adresse + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + p_adresse + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + p_adresse + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + p_adresse + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO PERSONNEL SELECT '', PERSONNEL.ID_ADRESSE, PERSONNEL.ID_DATE, PERSONNEL.ID_PERSONNEL, '" + p_nom + "', '" + p_prenom + "' FROM DATE, PERSONNEL, ADRESSE WHERE ADRESSE = '" + p_adresse + "' AND DATE = '" + p_date + "' AND ID_PERSONNEL = '" + p_superieur + "' AND NOT EXISTS (SELECT * FROM PERSONNEL, ADRESSE, DATE WHERE ADRESSE = '" + p_adresse + "' AND ADRESSE.ID_ADRESSE = PERSONNEL.ID_ADRESSE AND DATE = '" + p_date + "' AND DATE.ID_DATE = PERSONNEL.ID_DATE AND ID_SUPERIEUR = '" + p_superieur + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
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

	Commande::Commande(String^ ref, String^ dateLiv, String^ dateEmi, String^ datePaie, String^ moyPaie, String^ dateReg, String^ refArt, String^ quantiteArt, String^ totalArt, String^ totalHT, String^ totalTVA, String^ totalTTC) {

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

	Stock::Stock(String^ desi, String^ tst) {

		Categorie();
		s_desi = desi;
	}

	Stock::Stock(String^ ref, String^ desi, String^ prixHT, String^ tauxTVA, String^ quantiteStock, String^ seuilReapro, String^ couleur) {

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
#pragma once
#include "ClassCat.h"
#include "ClientAjouterAdresseForm.h"

namespace POOProject {

	using namespace ClassCat;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de ClientsModifierForm
	/// </summary>
	public ref class ClientsModifierForm : public System::Windows::Forms::Form
	{
	public:
		ClientsModifierForm(String^ NUM)
		{
			InitializeComponent();

			this->NUM = NUM;

			try {

				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);

				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT PERNOM, PERPRENOM, ADRESSE, DATE, ID_SUPERIEUR FROM PERSONNEL, DATE, ADRESSE WHERE PERSONNEL.ID_PERSONNEL='" + ID + "' AND PERSONNEL.ID_ADRESSE = ADRESSE.ID_ADRESSE AND PERSONNEL.ID_DATE = DATE.ID_DATE", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();

				while (dr->Read()) {

					
					textBoxNom->Text = dr->GetString(0);
					textBoxPrenom->Text = dr->GetString(1);
					textBoxAdrFact1->Text = dr->GetString(2);
					textBoxAdrFact2->Text = dr->GetString(3);
					textBoxAdrLivr1->Text = dr->GetString(4);
					textBoxAdrLivr2->Text = dr->GetString(5);
					textBoxDateNaiss->Text = dr->GetString(6);
					textBoxDate1er->Text = dr->GetString(7);
					
				}

				con->Close();

				if (textBoxAdrFact2->Text == "" && textBoxAdrLivr2->Text == "") {

					label6->Text = "Date Naissance";
					label7->Text = "Date 1er Achat";
					label8->Visible = false;
					label9->Visible = false;
					textBoxAdrFact2->Visible = false;
					textBoxAdrLivr2->Visible = false;
					textBoxDateNaiss->Location = System::Drawing::Point(168, 208);
					textBoxDate1er->Location = System::Drawing::Point(168, 248);
					ClientSize = System::Drawing::Size(512, 428);
					buttonAjouterAdresse->Location = System::Drawing::Point(16, 389);
					buttonModifier->Location = System::Drawing::Point(404, 389);
					buttonAnnuler->Location = System::Drawing::Point(293, 389);

				}
				else if (textBoxAdrFact2->Text != "") {

					label7->Text = "Date Naissance";
					label8->Text = "Date 1er Achat";
					label9->Visible = false;
					textBoxAdrLivr2->Visible = false;
					textBoxDateNaiss->Location = System::Drawing::Point(168, 248);
					textBoxDate1er->Location = System::Drawing::Point(168, 288);
					ClientSize = System::Drawing::Size(512, 468);
					buttonAjouterAdresse->Location = System::Drawing::Point(16, 429);
					buttonModifier->Location = System::Drawing::Point(404, 429);
					buttonAnnuler->Location = System::Drawing::Point(293, 429);
				}
				else if (textBoxAdrLivr2->Text != "") {

					label7->Text = "Date Naissance";
					label8->Text = "Date 1er Achat";
					label9->Visible = false;
					textBoxAdrFact2->Visible = false;
					textBoxAdrLivr1->Location = System::Drawing::Point(168, 168);
					textBoxAdrLivr2->Location = System::Drawing::Point(168, 208);
					textBoxDateNaiss->Location = System::Drawing::Point(168, 248);
					textBoxDate1er->Location = System::Drawing::Point(168, 288);
					ClientSize = System::Drawing::Size(512, 468);
					buttonAjouterAdresse->Location = System::Drawing::Point(16, 429);
					buttonModifier->Location = System::Drawing::Point(404, 429);
					buttonAnnuler->Location = System::Drawing::Point(293, 429);
				}
			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxDate1er;
	public:

	private: System::Windows::Forms::TextBox^ textBoxDateNaiss;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label8;
	public:



	private: System::Windows::Forms::Button^ buttonAjouterAdresse;

	protected:

		String^ NUM;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ClientsModifierForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonModifier;
	private: System::Windows::Forms::Button^ buttonAnnuler;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;




	private: System::Windows::Forms::TextBox^ textBoxNum;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxAdrFact1;
	private: System::Windows::Forms::TextBox^ textBoxAdrFact2;
	private: System::Windows::Forms::TextBox^ textBoxAdrLivr2;



	private: System::Windows::Forms::TextBox^ textBoxAdrLivr1;
	private: System::Windows::Forms::Label^ label7;









	private: System::Windows::Forms::Label^ label6;








	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonModifier = (gcnew System::Windows::Forms::Button());
			this->buttonAnnuler = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxNum = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrFact1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrFact2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrLivr2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrLivr1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxDate1er = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateNaiss = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buttonAjouterAdresse = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonModifier
			// 
			this->buttonModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonModifier->Location = System::Drawing::Point(404, 412);
			this->buttonModifier->Name = L"buttonModifier";
			this->buttonModifier->Size = System::Drawing::Size(80, 27);
			this->buttonModifier->TabIndex = 0;
			this->buttonModifier->Text = L"Modifier";
			this->buttonModifier->UseVisualStyleBackColor = true;
			this->buttonModifier->Click += gcnew System::EventHandler(this, &ClientsModifierForm::buttonModifier_Click);
			// 
			// buttonAnnuler
			// 
			this->buttonAnnuler->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAnnuler->Location = System::Drawing::Point(293, 412);
			this->buttonAnnuler->Name = L"buttonAnnuler";
			this->buttonAnnuler->Size = System::Drawing::Size(72, 27);
			this->buttonAnnuler->TabIndex = 1;
			this->buttonAnnuler->Text = L"Annuler";
			this->buttonAnnuler->UseVisualStyleBackColor = true;
			this->buttonAnnuler->Click += gcnew System::EventHandler(this, &ClientsModifierForm::buttonAnnuler_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Numéro";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Prénom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Adresse Fact";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Adresse Fact 2";
			// 
			// textBoxNum
			// 
			this->textBoxNum->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNum->Location = System::Drawing::Point(168, 8);
			this->textBoxNum->Name = L"textBoxNum";
			this->textBoxNum->Size = System::Drawing::Size(316, 25);
			this->textBoxNum->TabIndex = 7;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNom->Location = System::Drawing::Point(168, 48);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(316, 25);
			this->textBoxNom->TabIndex = 8;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrenom->Location = System::Drawing::Point(168, 88);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(316, 25);
			this->textBoxPrenom->TabIndex = 9;
			// 
			// textBoxAdrFact1
			// 
			this->textBoxAdrFact1->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdrFact1->Location = System::Drawing::Point(168, 128);
			this->textBoxAdrFact1->Name = L"textBoxAdrFact1";
			this->textBoxAdrFact1->Size = System::Drawing::Size(316, 25);
			this->textBoxAdrFact1->TabIndex = 10;
			this->textBoxAdrFact1->Text = L"numéroRue nomRue, ville, codePostal";
			// 
			// textBoxAdrFact2
			// 
			this->textBoxAdrFact2->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdrFact2->Location = System::Drawing::Point(168, 168);
			this->textBoxAdrFact2->Name = L"textBoxAdrFact2";
			this->textBoxAdrFact2->Size = System::Drawing::Size(316, 25);
			this->textBoxAdrFact2->TabIndex = 11;
			this->textBoxAdrFact2->Text = L"numéroRue nomRue, ville, codePostal";
			// 
			// textBoxAdrLivr2
			// 
			this->textBoxAdrLivr2->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdrLivr2->Location = System::Drawing::Point(168, 248);
			this->textBoxAdrLivr2->Name = L"textBoxAdrLivr2";
			this->textBoxAdrLivr2->Size = System::Drawing::Size(316, 25);
			this->textBoxAdrLivr2->TabIndex = 15;
			this->textBoxAdrLivr2->Text = L"numéroRue nomRue, ville, codePostal";
			// 
			// textBoxAdrLivr1
			// 
			this->textBoxAdrLivr1->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdrLivr1->Location = System::Drawing::Point(168, 208);
			this->textBoxAdrLivr1->Name = L"textBoxAdrLivr1";
			this->textBoxAdrLivr1->Size = System::Drawing::Size(316, 25);
			this->textBoxAdrLivr1->TabIndex = 14;
			this->textBoxAdrLivr1->Text = L"numéroRue nomRue, ville, codePostal";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 249);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Adresse Livr 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Adresse Livr";
			// 
			// textBoxDate1er
			// 
			this->textBoxDate1er->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDate1er->Location = System::Drawing::Point(168, 328);
			this->textBoxDate1er->Name = L"textBoxDate1er";
			this->textBoxDate1er->Size = System::Drawing::Size(316, 25);
			this->textBoxDate1er->TabIndex = 19;
			this->textBoxDate1er->Text = L"AAAA-MM-JJ";
			// 
			// textBoxDateNaiss
			// 
			this->textBoxDateNaiss->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDateNaiss->Location = System::Drawing::Point(168, 288);
			this->textBoxDateNaiss->Name = L"textBoxDateNaiss";
			this->textBoxDateNaiss->Size = System::Drawing::Size(316, 25);
			this->textBoxDateNaiss->TabIndex = 18;
			this->textBoxDateNaiss->Text = L"AAAA-MM-JJ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 329);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Date 1er Achat";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 289);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(136, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Date Naissance";
			// 
			// buttonAjouterAdresse
			// 
			this->buttonAjouterAdresse->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAjouterAdresse->Location = System::Drawing::Point(16, 412);
			this->buttonAjouterAdresse->Name = L"buttonAjouterAdresse";
			this->buttonAjouterAdresse->Size = System::Drawing::Size(137, 27);
			this->buttonAjouterAdresse->TabIndex = 20;
			this->buttonAjouterAdresse->Text = L"Ajouter adresse";
			this->buttonAjouterAdresse->UseVisualStyleBackColor = true;
			this->buttonAjouterAdresse->Click += gcnew System::EventHandler(this, &ClientsModifierForm::buttonAjouterAdresse_Click);
			// 
			// ClientsModifierForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 451);
			this->Controls->Add(this->buttonAjouterAdresse);
			this->Controls->Add(this->textBoxDate1er);
			this->Controls->Add(this->textBoxDateNaiss);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxAdrLivr2);
			this->Controls->Add(this->textBoxAdrLivr1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxAdrFact2);
			this->Controls->Add(this->textBoxAdrFact1);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->textBoxNum);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAnnuler);
			this->Controls->Add(this->buttonModifier);
			this->Name = L"ClientsModifierForm";
			this->Text = L"PersonnelModifierForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
	}

	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nom = textBoxNom->Text;
		String^ prenom = textBoxPrenom->Text;
		String^ adrFact = textBoxAdrFact1->Text;
		String^ adrFact2 = textBoxAdrFact2->Text;
		String^ adrLivr = textBoxAdrLivr1->Text;
		String^ adrLivr2 = textBoxAdrLivr2->Text;
		String^ dateNaiss = textBoxDateNaiss->Text;
		String^ date1er = textBoxDate1er->Text;

		if (nom == "" || prenom == "" || adrFact == "" || adrLivr == "" || dateNaiss == "" || date1er == "") {

			MessageBox::Show("Remplissez tous les champs !", "Erreur");
		}
		else {

			Client monClient(this->NUM, nom, prenom, adrFact, adrFact2, adrLivr, adrLivr2, dateNaiss, date1er);
			monClient.Modifier();

			this->Hide();
		}
		
	}

	private: System::Void buttonAjouterAdresse_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBoxAdrFact2->Visible == false && textBoxAdrLivr2->Visible == false) {

			ClientAjouterAdresseForm^ caf = gcnew ClientAjouterAdresseForm(0);
			caf->ShowDialog();

			this->Hide();
		}
		else if (textBoxAdrFact2->Visible == false) {

			ClientAjouterAdresseForm^ caf = gcnew ClientAjouterAdresseForm(1);
			caf->ShowDialog();

			this->Hide();
		}
		else if (textBoxAdrLivr2->Visible == false) {

			ClientAjouterAdresseForm^ caf = gcnew ClientAjouterAdresseForm(2);
			caf->ShowDialog();

			this->Hide();
		}
		else {

			MessageBox::Show("Nombre maximum d'adresse atteint", "Erreur");
		}
	}
	};
}
